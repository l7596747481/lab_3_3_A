#pragma once
#include "Vector2D.h"

class Vector2D_public
	:public Vector2D
{
public:
	Vector2D_public();
	Vector2D_public(double, double);
	Vector2D_public(const Vector2D_public&);
	~Vector2D_public();

	double ScalarProduct(Vector2D_public, Vector2D_public);
	void Multiplying(double);
	double Length();
	string Comparison(Vector2D_public, Vector2D_public);

	Vector2D_public& operator --();
	Vector2D_public& operator ++();
	Vector2D_public operator --(int);
	Vector2D_public operator ++(int);
};