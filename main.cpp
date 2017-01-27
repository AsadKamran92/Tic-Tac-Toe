#include <iostream>

//Makes the board
char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

//Prints the board
void printBoard() {
  std::cout << " 0   1   2" << std::endl;

  for(int i=0; i<3; i++)
  {
    std::cout << i << " ";
    for(int j=0; j<3; j++)
    {
      std::cout << board[i][j];
      if(j<2){

      std::cout << " | ";
    }
    }
    std::cout << std::endl;
    std::cout << "  _________" << std::endl;

    }
}

//Main code
int main() {
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;



  std::cout << "Welcome to Tic-Tac-Toe (Samsung13M Version)" << std::endl;
  std::cout << "(No Description)" << std::endl;

  printBoard();




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
    std::cout << "pick a Row: ";
    std::cin >> rowIn;
    std::cout << "Pick a Collum: ";
    std::cin >> colIn;

    if(turn == 0){
      board[rowIn][colIn] = 'X';
      printBoard();
    }
    else{
      board[rowIn][colIn] = 'O';
      printBoard();
    }


    turn++;
    turn %= 2; //Alternates turn

    }

}
