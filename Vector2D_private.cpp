#include "Vector2D_private.h"

Vector2D_private::Vector2D_private()
	:Vector2D_private(0, 0)
{}

Vector2D_private::Vector2D_private(double x, double y)
{
	set_x(x);
	set_y(y);
}

Vector2D_private::Vector2D_private(const Vector2D_private& v)
{
	set_x(v.get_x());
	set_y(v.get_y());
}

Vector2D_private::~Vector2D_private()
{}

double Vector2D_private::ScalarProduct(Vector2D_private v1, Vector2D_private v2)
{
	return v1.get_x() * v2.get_x() + v1.get_y() * v2.get_y();
}

void Vector2D_private::Multiplying(double a)
{
	cout << a << " : " << "( " << get_x() * a << " ; " << get_y() * a << " )";
}

double Vector2D_private::Length()
{
	return sqrt(pow(get_x(), 2) + pow(get_y(), 2));
}

string Vector2D_private::Comparison(Vector2D_private v1, Vector2D_private v2)
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

ostream& operator <<(ostream& out, const Vector2D_private& a)
{
	out << string(a);
	return out;
}

istream& operator >>(istream& in, Vector2D_private& a)
{
	double x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	a.set_x(x);
	a.set_y(y);

	return in;
}

Vector2D_private& Vector2D_private::operator ++()
{
	set_x(get_x() + 1);
	return *this;
}

Vector2D_private& Vector2D_private::operator --()
{
	set_x(get_x() - 1);
	return *this;
}

Vector2D_private Vector2D_private::operator ++(int)
{
	Vector2D_private t(*this);
	set_y(get_y() + 1);
	return t;
}

Vector2D_private Vector2D_private::operator --(int)
{
	Vector2D_private t(*this);
	set_y(get_y() - 1);
	return t;
}