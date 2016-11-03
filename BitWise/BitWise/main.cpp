#include "Vetor.h"
#include <iostream>

using namespace std;

int main()
{
	Vetor u(3.0f, 4.0f);
	Vetor a = u * 2.0f;
	Vetor b = a - u;
	Vetor c = a + u;

	cout << a.GetX() << "," << a.GetY() << endl;
	cout << b.GetX() << "," << b.GetY() << endl;
	cout << c.GetX() << "," << c.GetY() << endl;

	system("pause");
	return 0;
}