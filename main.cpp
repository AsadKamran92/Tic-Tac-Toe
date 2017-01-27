#include <iostream>
#include "game.hpp"

//Makes the board

//Main code
int main() {
  Game myGame;
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;



  std::cout << "Welcome to Tic-Tac-Toe (Samsung13M Version)" << std::endl;
  std::cout << "(No Description)" << std::endl;

  myGame.printBoard();





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
    myGame.makeMove(turn, rowIn, colIn);


    turn++;
    turn %= 2; //Alternates turn

    }

}
