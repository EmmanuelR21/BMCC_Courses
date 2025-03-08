#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

void drawBoard(char board[3][3][2]);

int main() {
  char board[3][3][2] = {{" ", " ", " "}, {" ", " ", " "}, {" ", " ", " "}};
  int playerTurn;

  cout << "Are you going first or second(1/2): ";
  cin >> playerTurn;

  if (playerTurn == 1) {
  } else {
  }

  drawBoard(board);

  strcpy(board[0][2], "x");
  strcpy(board[1][1], "x");

  drawBoard(board);
  return 0;
}

void drawBoard(char board[3][3][2]) {
  cout << "CURRENT BOARD" << endl;
  cout << "-------------" << endl;
  for (int i = 0; i < 3; i++) {
    cout << setw(5);
    for (int j = 0; j < 3; j++) {
      cout << board[i][j];
      if (j != 2)
        cout << "|";
    }
    cout << endl;
  }
}
