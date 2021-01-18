/******************************************************************************
File : pieces.h
Description : header file for pieces.cpp
Project by : Shreyas Chavhan
Guided by [Attribution]: Javier López
********************************************************************************/

// #pragma once
#ifndef _PIECES_
#define _PIECES_

class pieces{
public:
    int get_BlockType(int pPiece, int pRotation, int pX, int pY);
    int get_X_InitialPosition(int pPiece, int pRotation);
    int get_Y_InitialPosition(int pPiece, int pRotation);
};

#endif /* end of include guard: _PIECES_ */
