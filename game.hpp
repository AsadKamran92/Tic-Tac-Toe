#ifndef GAME_H
#define GAME_H

class Game
{
public:
  char board[3][3];

  Game() {
    for(int i=0; i<3; i++) {
      for(int j=0; j<3; j++) {
        board[j][i] = ' ';
      }
    }
  }


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

  bool makeMove(int turn, int rowIn, int colIn) {

    if(rowIn<0 || rowIn>2 || colIn<0 || colIn>2) {
      std::cout << "Invalid Move, You Should Pick A New Position" << std::endl;
      return false;

    }
    else if(board[rowIn][colIn] != ' '){
      std::cout << "That Space Is Taken, You Should Pick A New Position" << std::endl;
      return false;
    }
    else {


      if(turn == 0){
        board[rowIn][colIn] = 'X';
      }
      else{
        board[rowIn][colIn] = 'O';
      }
      std::cout << "Great Choice, DUDE!!!" << std::endl;
      return true;
  }
  }

};

#endif
