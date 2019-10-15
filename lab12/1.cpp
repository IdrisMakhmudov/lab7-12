/*
1. Описать функцию PowerA3(A, B), вычисляющую третью степень
числа A и возвращающую ее в переменной B (A — входной, B — выходной
параметр; оба параметра являются вещественными). С помощью этой
функции найти третьи степени пяти данных чисел.
*/
#include <iostream>
#include <cmath>
using namespace std;

void PowerA3()
{
    double A,B;
    cin>>A;
    B=pow(A,3);
    cout<<B<<endl;
}

int main()
{
for(int i=1; i<=5; i++)
PowerA3();
return 0;
}
