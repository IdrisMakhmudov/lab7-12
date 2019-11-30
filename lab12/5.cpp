#include <iostream>

using namespace std;

double Fact2(int N){
    int i = 2 - N % 2;
    double sum = 1.0;
    for(;i <= N; i += 2){
        sum *= i;
    }
    return sum;
}

int main()
{

    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Result: " << Fact2(N);

    return 0;
}
