/******************************************************************************
File : pieces.cpp
Description : All the tetris pieces with their respective rotations and displacement.
Project by : Shreyas Chavhan
Guided by [Attribution]: Javier López
********************************************************************************/

#include "pieces.h"

// There are 7 different types of pieces: square, I, L, L-mirrored, N, N-mirrored and T.
// 0 means “no block”, 1 means “normal block” and 2 means “pivot block”. The pivot block is the rotation point

// storing pieces in 4 D array :
// char mPieces[types of pieces][rotaion][horizontal blocks][vertical blocks]
char mPieces[7][4][5][5] =
{
    // Square
    {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0},
        }
    },
    // I
    {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 1, 1},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 1, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {1, 1, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 1, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        }
    },
    // L
    {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 0, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 1, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 1, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        }
    },
    // L - mirrored
    {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 1, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 1, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0},
        }
    },
    // N
    {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 1, 1, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        }
    },
    // N-mirrored
    {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 1, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 1, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        }
    },
    // T
    {
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 2, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 1, 2, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 1, 2, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        },
        {
            {0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 2, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0},
        }
    }
};

// Displacement of the piece to the position where it is first drawn in the board when it is created
// The translation are two numbers (horizontal tranlastion, vertical translation) that we have to store for each piece. We will use these numbers later in “Game” class when creating the pieces each time a new piece appears, so it will be initialized in the correct position. This is the array that stores these displacements:


// int mPieces_InitialPosition[kind][rotation][position]
int mPieces_InitialPosition[7][4][2] =
{
    // Square
    {
        {-2, -3},
        {-2, -3},
        {-2, -3},
        {-2, -3}
    },
    // I
    {
        {-2, -2},
        {-2, -3},
        {-2, -2},
        {-2, -3}
    },
    // L
    {
        {-2, -3},
        {-2, -3},
        {-2, -3},
        {-2, -2}
    },
    // L - mirrored
    {
        {-2, -3},
        {-2, -2},
        {-2, -3},
        {-2, -3}
    },
    // N
    {
        {-2, -3},
        {-2, -3},
        {-2, -3},
        {-2, -2}
    },
    // N - mirrored
    {
        {-2, -3},
        {-2, -3},
        {-2, -3},
        {-2, -2}
    },
    // T
    {
        {-2, -3},
        {-2, -3},
        {-2, -3},
        {-2, -2}
    }
};


// -------------------------------------------------------
/*
Return the type of a black (0 = no-block, 1 = normal block, 2 = pivot block)

Parameters:
>> pPiece : Piece to draw
>> pRotation : 1 of the 4 possible rotations
>> pX : horizontal postion
>> pY : Vertical postion in blocks
*/
// -------------------------------------------------------

int pieces :: get_BlockType(int pPiece, int pRotation, int pX, int pY){
    return mPieces[pPiece][pRotation][pX][pY];
}

// -------------------------------------------------------
/*
Returns the horizontal displacement of the block that need to be done in order to
place it in correct position

Parameters:
>> pPiece : Piece to draw
>> pRotation : 1 of the 4 possible rotations
*/
// -------------------------------------------------------

int pieces :: get_X_InitialPosition(int pPiece, int pRotation){
    return mPieces_InitialPosition[pPiece][pRotation][0];
}


// -------------------------------------------------------
/*
Returns the vertical displacement of the block that need to be done in order to
place it in correct position

Parameters:
>> pPiece : Piece to draw
>> pRotation : 1 of the 4 possible rotations
*/
// -------------------------------------------------------

int pieces :: get_Y_InitialPosition(int pPiece, int pRotation){
    return mPieces_InitialPosition[pPiece][pRotation][1];
}
