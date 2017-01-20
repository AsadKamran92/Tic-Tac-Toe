#include <iostream>

//Main code
int main() {
  int turn = 0;
  bool gameOver = false;

  std::cout << "Welcome to Tic-Tac-Toe (Samsung13M Version)" << std::endl;
  //Play game if there is not a win or loss
  while(gameOver == false) {
    //Checks if turn is player one
    if(turn == 0) {
      std::cout << "It is Player One's Turn!" << std::cout;
    }
    //Checks if turn is player two
    else {
      std::cout << "It is Player Two's Turn!" << std::cout;
      }

    //do the turn
    turn++;
    turn %= 2; //Alternates turn
    }
}
