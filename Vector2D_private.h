#pragma once
#include "Vector2D.h"

class Vector2D_private
	:private Vector2D
{
public:
	Vector2D_private();
	Vector2D_private(double, double);
	Vector2D_private(const Vector2D_private&);
	~Vector2D_private();

	double ScalarProduct(Vector2D_private, Vector2D_private);
	void Multiplying(double);
	double Length();
	string Comparison(Vector2D_private, Vector2D_private);

	friend ostream& operator <<(ostream&, const Vector2D_private&);
	friend istream& operator >>(istream&, Vector2D_private&);

	Vector2D_private& operator --();
	Vector2D_private& operator ++();
	Vector2D_private operator --(int);
	Vector2D_private operator ++(int);
};