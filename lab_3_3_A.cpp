#include "Vector2D_private.h"
#include "Vector2D_public.h"

int main()
{
	Vector2D c1;
	Vector2D c(3, 13);

	c1 = c;
	cout << "Vector : " << (string)c1 << "\n\n";

	Vector2D_private a(3, 13);

	cout << "++a : " << ++a << '\n';
	cout << "--a : " << --a << '\n';
	cout << "a++ : " << a++ << '\n';
	cout << "a-- : " << a-- << "\n\n";

	Vector2D_public v1,v2, p;

	cin >> v1;
	cin >> v2;
	cout << '\n';
	cout << v1 << '\n';
	cout << v2 << "\n";
	cout << "Vector 1 : " << string(v1) << '\n';
	cout << "Vector 2 : " << string(v2) << '\n';

	cout << "Scalar product : " << p.ScalarProduct(v1, v2) << '\n';
	cout << "Vector 1 multiplied by a number ";
	v1.Multiplying(5);
	cout << "\n";
	cout << "Vector 2 multiplied by a number ";
	v2.Multiplying(0.5);
	cout << '\n';

	cout << "Length of vector 1 : " << v1.Length() << '\n';
	cout << "Length of vector 2 : " << v2.Length() << '\n';
	cout << p.Comparison(v1, v2) << "\n\n";

	cin.get();
	cin.get();
	return 0;
}