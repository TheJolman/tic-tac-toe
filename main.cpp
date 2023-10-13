#include <iostream>
#include <array>
#include <limits>
using namespace std;

struct Player
{
  bool team; // false will be O, true wil be X
  void makeMove(char& move)
  {
    if (!team)
      move = 'o'; //ASCII value of 120
    else 
      move = 'x'; //ASCII value of 111
  }
};

void drawBoard(array<array<char, 3>, 3>);
bool gameOver(array<array<char, 3>, 3>);

int main()
{
  array<array<char, 3>, 3> board = {{{'#', '#', '#'}, {'#', '#', '#'}, {'#', '#', '#'}}};
  drawBoard(board);

  Player player1, player2;
  cout << "Player 1: Choose x or o: ";
  char team;
  while (true)
  {
    cin >> team; //TODO: add input validation
    if (team == 'o')
    {
      player1.team = true;
      player2.team = false;
      break;
    }
    else if (team == 'x')
    {
      player1.team = false;
      player2.team = true;
      break;
    }
    else 
    {
      cout << "Invalid Arguement. Player 1 try again: ";
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    while (!(gameOver(array<array<char, 3>, 3>))) //main gameplay loop
    {
      

    }
  }
}

void drawBoard(const array<array<char, 3>, 3> board)
{
  for (auto& row : board)
  {
    for (auto& element : row)
    {
      cout << element << " ";
    }
    cout << endl;
  }
}
//might be faster to have to player objects store their moves and pass those into this function
bool gameOver(array<array<char, 3>, 3>) //126 and 111 (times 3 = 378 and 333)
{
  return false;
  int sum;
  while (sum != 378 || 333)
  {
    break;
  }
  
}
