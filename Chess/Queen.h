#pragma once
#include "Figure.h"

///
///  \brief Klasa reprezentująca figurę królowej
///
class Queen : public Figure
{
public:
	Queen(bool isWhite);
	~Queen();
private:
	void InitBasicMoves();
};

