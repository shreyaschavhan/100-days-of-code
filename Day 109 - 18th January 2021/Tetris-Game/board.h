/*******************************************************************************
File : board.h
Description : Board of the game.
        Now we are going to learn how to store the pieces in the board and check collisions. This class stores a bidimensional array of N x N blocks that are initialized to POS_FREE. The pieces will be stored by filling these blocks when they fall down updating the block to POS_FILLED. In this class we need to implement methods in order to store a piece, check if a movement is possible, delete lines, etc. Our board is going to be very flexible, we will be able to choose the amount of horizontal and vertical blocks and the size of each block.
By : Shreyas Chavhan
Guided by : Javier López

********************************************************************************/

#ifndef _BOARD_
#define _BOARD_

#include "pieces.h"

#define Board_Line_Width 6              // width of each of the two lines that delimit the board
#define Block_Size 16                   // width and height of each block of a piece
#define Board_Position 320              // center postion of the board from the left of the screen
#define Board_Width 10                  // board width in blocks
#define Board_Height 20                 // board height in blocks
#define Min_Vertical_Margin 20          // minimum vertical margin for the board limit
#define Min_Horizontal_Margin 20        // minimum horizontal margin for the board limit
#define Piece_Blocks 5                  // number of horizontal and vertical blocks of a matrix piece




#endif /* end of include guard: _BOARD_ */
