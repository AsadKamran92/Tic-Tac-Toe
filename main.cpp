#include <iostream>

//Makes the board
char board[3][3] = {{'7','8','9'},{'4','5','6'},{'1','2','3'}};

//Prints the board
void printBoard() {

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      std::cout << board[i][j];
    }
    std::cout << std::endl;  }
}

//Main code
int main() {
  int turn = 0;
  bool gameOver = false;



  std::cout << "Welcome to Tic-Tac-Toe (Samsung13M Version)" << std::endl;
  std::cout << "Use the numerical keypad for the board" << std::endl;

  printBoard();



/*
  //Play game if there is not a win or loss
  while(gameOver == false) {
    //Checks if turn is player one
    if(turn == 0) {
      std::cout << "It is Player One's Turn!" << std::endl;
    }
    //Checks if turn is player two
    else {
      std::cout << "It is Player Two's Turn!" << std::endl;
      }

    //do the turn
    turn++;
    turn %= 2; //Alternates turn

    }
*/
}
