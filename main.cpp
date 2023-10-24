#include <iostream>
#include <vector>
using namespace std;

void drawBoard(vector<vector<char>> &);

bool checkWin(vector<vector<char>> &, char player );

int main() {
  vector<vector<char>> board(3, vector<char>(3, ' '));

  char player = 'X';
  int row = 0, col = 0;

  while (true) {
    drawBoard(board);
    cout << player << " enter your move (row col): ";
    cin >> row >> col;

    // check for valid move
    if (board[row][col] == ' ') {
      board[row][col] = player;

      // if move is valid, check for win
      if (checkWin(board, player)) {
        cout << player << " wins!!\n";
        break;
      }
      player = (player == 'X') ? 'O' : 'X';
    }
    else {
      cout << "Invalid move. Try again.\n";
    }
  }
}

void drawBoard(vector<vector<char>>& board) {
  int i = 0;
  cout << "  0 1 2\n";
  cout << "  - - -\n";
  for (const auto& row : board) {
    cout << i++;
    cout << '|';
    for (const auto& cell : row)
      cout << cell << ' ';
    cout << '|';
    cout << endl;
  }
  cout << "  - - -\n";
}

bool checkWin(vector<vector<char>>& board, char player ) {
  // check rows
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
      return true;
  }
  // check diagonals
  if (board[1][1] == player) {
    if ((board[0][0] == player && board[2][2] == player) || (board[0][2] == player && board[2][0] == player))
      return true;
  }
  // check cols
  for (int j = 0; j < 3; j++){
    if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
      return true;
  }
  return false;
}
