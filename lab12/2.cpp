/*
2. Описать функцию Sign(X) целого типа, возвращающую для
вещественного числа X следующие значения:
−1, если X < 0; 0, если X = 0; 1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B)
для данных вещественных чисел A и B.
*/
#include <iostream>
#include <cmath>
using namespace std;

double Sign(double SAM)
{
  cin >> SAM;
    if (SAM < 0) SAM = -1;
    else
    {
        if(SAM == 0) SAM = 0;
        else
        SAM = 1;
    }
}

int main()
{
  double A;
Sign(A);
cout << A;
return 0;
}
