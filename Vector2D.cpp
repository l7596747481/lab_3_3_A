#include "Vector2D.h"

Vector2D::Vector2D()
	:x(0), y(0)
{}

Vector2D::Vector2D(double x, double y)
	:x(x), y(y)
{}

Vector2D::Vector2D(const Vector2D& v)
	:x(v.x), y(v.y)
{}

Vector2D::~Vector2D()
{}

Vector2D& Vector2D::operator = (const Vector2D& r)
{
	x = r.x;
	y = r.y;

	return *this;
}

Vector2D::operator string () const
{
	stringstream ss;
	ss << "( " << x << " ; " << y << " )";

	return ss.str();
}

ostream& operator <<(ostream& out, const Vector2D& a)
{
	return out << "x = " << a.x << '\n' << "y = " << a.y;
}

istream& operator >>(istream& in, Vector2D& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;
	return in;
}