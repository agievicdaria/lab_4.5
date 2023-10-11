#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;

int main() {
    double R, x, y;
    srand((unsigned)time(NULL));

    // standart
    for(int i = 0; i < 10; i++) {
        cout << "R = "; cin >> R;
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if(((y >= x) && (x * x + y * y <= R * R) && (x >= 0)) || ((y <= x ) && (x * x + y * y <= R * R) && (x <= 0))) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    cout << endl << fixed;

    // random
    for (int i = 0; i < 10; i++)
    {
        x = 2. * R * rand() / RAND_MAX - R;
        y = 2. * R * rand() / RAND_MAX - R;
        R = 2. * R * rand() / RAND_MAX - R;

        if (((y >= x) && (x * x + y * y <= R * R) && (x >= 0)) || ((y <= x ) && (x * x + y * y <= R * R) && (x <= 0)))
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " "
                 << setw(8) << setprecision(4) << R << " "
                 << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            
                 << setw(8) << setprecision(4) << y << " "
                 << setw(8) << setprecision(4) << R << " "
                 << "no" << endl;
    }
    return 0;
}