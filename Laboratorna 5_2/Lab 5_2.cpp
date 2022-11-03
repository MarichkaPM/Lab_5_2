/*#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
	double xp, xk, x, dx, eps, s = 0;
	double result;
	int n = 0;
	double Pi = 4 * atan(1.0);
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "acos(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
		if (-1 < x && x < 1)
		{
			while (x <= xk)
			{
				S(x, eps, n, s);

				double result = Pi / 2.0 - (x + s);
				cout << "|" << setw(7) << setprecision(2) << x << " |"
					<< setw(10) << setprecision(5) << acos(x) << " |"
					<< setw(10) << setprecision(5) << result << " |"
					<< setw(5) << n << " |"
					<< endl;
				x += dx;
			}
		}
		else
		{
			cout << "\tNon correct meaning of x" << setw(9) << "|" << endl <<
				"\tx need to be - 1 < x && x < 1 " << setw(3) << "|" << endl;
			cout << "-----------------------------------------" << endl;
		}
}
void S(const double x, const double eps, int& n, double& s)
{
	n = 1; // вираз залежить від умови завдання варіанту
	double a = (x * x * x) / (2 * 3); // вираз залежить від умови завдання варіанту
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
}
void A(const double x, const int n, double& a)
{
	double R = ((2 * n - 1) * (2 * n - 1) * x * x) / (2 * n * (2 * n + 1)); // вираз залежить від умови завдання варіанту
	a *= R;
}*/











#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(const double x, const double eps, int&n);
double A(const double x, const int n, double a);

int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	double Pi = 4 * atan(1.0);
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "acos(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	if (-1 < x && x < 1)
	{
		while (x <= xk)
		{
			s = S(x, eps, n);
			double result = Pi / 2.0 - (x + s);
			cout << "|" << setw(7) << setprecision(2) << x << " |"
				<< setw(10) << setprecision(5) << acos (x) << " |"
				<< setw(10) << setprecision(5) << result << " |"
				<< setw(5) << n << " |"
				<< endl;
			x += dx;
		}
		cout << "-------------------------------------------------" << endl;
		return 0;
	}
	else
	{
		cout << "\tNon correct meaning of x" << setw(9) << "|" << endl <<
			"\tx need to be - 1 < x && x < 1 " << setw(3) << "|" << endl;
	}
	cout << "-----------------------------------------" << endl;
	
}
double S(const double x, const double eps, int& n)
{
	n = 1; 
	double a = (x * x * x) / (2 * 3); 
	double s = a;
	do {
		n++;
			a = A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}
double A(const double x, const int n, double a)
{
	double R = ((2 * n - 1) * (2 * n - 1) * x * x) /
		(2 * n * (2 * n + 1)); 
	a *= R;
	return a;
}
