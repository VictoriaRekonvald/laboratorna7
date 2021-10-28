#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include <cmath> 

using namespace std;

int main()
{
    double y, x, z;
    cout << "LAboratorna7" << endl;
    cout << "Cycle for" << endl;
    cout << "Enter x = ";
    cin >> x;
    cout << "Enter y = ";
    cin >> y;
    z = 1;
    for (int n = 1; n < 11; n++)
    {
        z *= pow (n,1);
        z = (pow(y, 3) + z + 2) / (x + 5);
    }
    cout << "z = " << z << endl;
    system("pause");
    return 0;
}
