/*******************************************************************************
File : board.cpp
Description : Board of the game.
        Now we are going to learn how to store the pieces in the board and check collisions. This class stores a bidimensional array of N x N blocks that are initialized to POS_FREE. The pieces will be stored by filling these blocks when they fall down updating the block to POS_FILLED. In this class we need to implement methods in order to store a piece, check if a movement is possible, delete lines, etc. Our board is going to be very flexible, we will be able to choose the amount of horizontal and vertical blocks and the size of each block.
By : Shreyas Chavhan
Guided by : Javier López

********************************************************************************/
