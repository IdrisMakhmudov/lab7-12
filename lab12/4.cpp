#include <iostream>

using namespace std;

int Quarter(double x, double y){
    if(x * y > 0)
        if(x > 0) return 1;
        else return 3;
    if(x > 0) return 4;
    return 2;
}

int main()
{

    for(int i = 0; i < 3; i++) {
        double x, y;
        cout << "Enter x and y: ";
        cin >> x >> y;

        cout << "Quarter: " << Quarter(x, y) << endl;
    }

    return 0;
}
