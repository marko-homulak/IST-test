#include "ZavdClass.h"
#include "stdafx.h"

#define P std::cout<<"\n"

using namespace std;

// Calculation of the function b[x,y,z]
double ZavdClass::Fn_b()
{
	double b = y * pow(abs((pow(abs(x), 0.3) / (z + y)) + pow(tan((x + pow(z, 2)) / (2 * x - 1.4)), 2)), 1./3) - z * exp(pow(x, 2) - y);
	return b;
}

// Calculation of the function a[x,y,z,b]
double ZavdClass::Fn_a()
{
	double a = pow(abs(z), 0.2) * ((3 + exp(y - x) + sqrt(pow(abs(pow(y, 2) + Fn_b()), 0.3))) / (1 + pow(x, 2) * abs(y - pow(tan(pow(z, 2)), 2))));
	return a;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");

	double x = 0.48 * 9;
	double y = 0.47 * 9;
	double z = -1.32 * 9;
	double j = 0.2;
	double k = 1;

	ZavdClass a = ZavdClass(x, y, z);

	cout << "Task 1:"; P;
	cout << left << setw(7) << "" << "Function a[x,y,z,b]: " << a.Fn_a() << "\t" << "Function b[x,y,z]: " << a.Fn_b();
	P; P;
	cout << "Task 2:"; P;

	for (double i = -1; i <= 1; i += j)
	{
		ZavdClass a = ZavdClass(x + i, y, z);
		if (k < 10) {
			cout << left << setw(7) << "" << setw(10) << "Function a" << k << setw(3) << ":" << setw(19) << a.Fn_a() << "Function b" << k << setw(3) << ":" << setw(12) << a.Fn_b(); P;
		}
		else {
			cout << left << setw(7) << "" << setw(10) << "Function a" << k << setw(2) << ":" << setw(19) << a.Fn_a() << setw(10) << "Function b" << k << setw(2) << ":" << setw(12) << a.Fn_b(); P;
		}
		k++;
	}
}
