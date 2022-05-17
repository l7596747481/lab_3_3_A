#include "Vector2D_public.h"

Vector2D_public::Vector2D_public()
	:Vector2D_public(0, 0)
{}

Vector2D_public::Vector2D_public(double x, double y)
{
	set_x(x);
	set_y(y);
}

Vector2D_public::Vector2D_public(const Vector2D_public& v)
{
	set_x(v.get_x());
	set_y(v.get_y());
}

Vector2D_public::~Vector2D_public()
{}

double Vector2D_public::ScalarProduct(Vector2D_public v1, Vector2D_public v2)
{
	return v1.get_x() * v2.get_x() + v1.get_y() * v2.get_y();
}

void Vector2D_public::Multiplying(double a)
{
	cout << a << " : " << "( " << get_x() * a << " ; " << get_y() * a << " )";
}

double Vector2D_public::Length()
{
	return sqrt(pow(get_x(), 2) + pow(get_y(), 2));
}

string Vector2D_public::Comparison(Vector2D_public v1, Vector2D_public v2)
{
	if (v1.Length() > v2.Length())
	{
		return "Vector 1 > Vector 2";
	}
	else if (v1.Length() == v2.Length())
	{
		return "Vector 1 = Vector 2";
	}
	else
		return "Vector 1 < Vector 2";
}

Vector2D_public& Vector2D_public::operator ++()
{
	set_x(get_x() + 1);
	return *this;
}

Vector2D_public& Vector2D_public::operator --()
{
	set_x(get_x() - 1);
	return *this;
}

Vector2D_public Vector2D_public::operator ++(int)
{
	Vector2D_public t(*this);
	set_y(get_y() + 1);
	return t;
}

Vector2D_public Vector2D_public::operator --(int)
{
	Vector2D_public t(*this);
	set_y(get_y() - 1);
	return t;
}