#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	double x, y;
	cout << "Enter x = ";
	cin >> x;
	y = 0;
	for (int k = 1; k < 11; k++)
	{
		y += k;
		y = log(y) + pow(x, 5);
	}
	cout << " y = " << y << endl;
	system("pause");
	return 0;