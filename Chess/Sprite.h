#pragma once

///
///  \brief Klasa umożliwiająca związanie obrazka z danym obiektem
///
/// W tym projekcie wystarczającym parametrem jest przesunięcie X na bitmapie zawierającej wszystkie figury szachowe

class Sprite
{
public:
	Sprite();
	~Sprite();

	///
	/// \brief Zwraca przesunięcie x na bitmapie figur szachowych
	///
	int GetSpriteOffset();

	///
	/// \brief Ustawia przesunięcie x na bitmapie figur szachowych
	///
	void SetSpriteOffset(int spriteOffset);
protected:
	int _spriteOffset;
};

