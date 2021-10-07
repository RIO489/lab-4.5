#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	srand((signed) time (NULL));

	
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((R + x >= y && y >= 0 && (x * x) + (y * y) <= (R * R)) ||
			(x * x) + (y * y) <= (R * R) && y <= 0 && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = -R + rand() * (R + R) / RAND_MAX;
			y = -R + rand() * (R + R) / RAND_MAX;
			if (((R + x >= y && y >= 0 && (x * x) + (y * y) <= (R * R)) ||
				(x * x) + (y * y) <= (R * R) && y <= 0 && x <= 0))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}
