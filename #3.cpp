#include <iostream>
#include <math.h>

using namespace std;

float RingS(float r1, float r2)
{
    return M_PI*r1*r1-M_PI*r2*r2;
}

int main()
{
    float ar1, ar2, br1, br2, cr1, cr2;
    cin >> ar1 >> ar2 >> br1 >> br2 >> cr1 >> cr2;
    cout << RingS(ar1, ar2) << endl << RingS(br1, br2) << endl << RingS(cr1, cr2);
}
