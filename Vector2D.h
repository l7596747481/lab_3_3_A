#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Vector2D
{
private:
	double x;
	double y;

public:
	Vector2D();
	Vector2D(double, double);
	Vector2D(const Vector2D&);
	~Vector2D();

	void set_x(double x) { this->x = x; }
	void set_y(double y) { this->y = y; }

	double get_x() const { return x; }
	double get_y() const { return y; }

	Vector2D& operator =(const Vector2D&);
	operator string() const;

	friend ostream& operator <<(ostream&, const Vector2D&);
	friend istream& operator >>(istream&, Vector2D&);
};