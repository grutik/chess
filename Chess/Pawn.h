#pragma once
#include "Figure.h"

///
///  \brief Klasa reprezentująca figurę pionka
///
class Pawn : public Figure
{
public:
	Pawn(bool isWhite);
	~Pawn();
private:
	void InitBasicMoves();
	void InitAttackMoves();
};

