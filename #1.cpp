#include <iostream>
#include <cmath>

using namespace std;

float PowerA3(float a)
{
    float b = pow(a, 3);
    return b;
}

int main()
{
    float a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << PowerA3(a) << " " << PowerA3(b) << " " <<  PowerA3(c) << " "  <<  PowerA3(d) << " " << PowerA3(e);
}
