#include <iostream>
#include "windows.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m;
    const float g = 9.8;
    const int p = 1030;
    double v;
    printf("input m\n");
    scanf_s("%i", &m);

    v = m * g / p * g;

    printf("m=%i\nОб'єм зануреної частини судна = V = m * g / p * g = %lf\n", m, g, p, v);
    return 0;
}
