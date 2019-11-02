#include <iostream>

using namespace std;

float Fact2(int n)
{
    if(n%2==0)
    {
        float s = 2;
        for(int i = 4; i<=n; i += 2)
        {
            s *= i;
        }
        return s;
    }
    else
    {
        float s = 1;
        for(int i = 3; i<=n; i += 2)
        {
            s *= i;
        }
        return s;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << Fact2(n);
}
