#include <iostream>
#include <vector>
using namespace std;

void drawBoard(vector<vector<char>> &);

bool checkWin(vector<vector<char>> &, char player );

int main() {
  vector<vector<char>> board(3, vector<char>(3, '0'));

  char player = 'X';

  drawBoard(board);
}

void drawBoard(vector<vector<char>>& board) {
  for (const auto& row : board) {
    for (const auto& cell : row)
      cout << cell << ' ';
    cout << endl;
  }
}

bool checkWin(vector<vector<char>> &, char player ) {
  return false;
}
