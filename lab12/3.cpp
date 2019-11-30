#include <iostream>

using namespace std;

double RingS(double r1, double r2){
    return r1*r1*3.14 - r2*r2*3.14;
}

int main()
{

    for(int i = 0; i < 3; i++) {
        double r1, r2;
        cout << "Enter R1 and R2: ";
        cin >> r1>> r2;

        cout << "Result: " << RingS(r1, r2) << endl;
    }

    return 0;
}
