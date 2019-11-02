#include <iostream>

using namespace std;

int Quarter(float x, float y)
{
    if(x==0 && y==0)
    {
        return 0;
    }
    else if(x>0 && y>0)
    {
        return 1;
    }
    else if(x<0 && y>0)
    {
        return 2;
    }
    else if(x<0 && y<0)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

int main()
{
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << Quarter(x1, y1) <<  endl << Quarter(x2, y2) << endl << Quarter(x3, y3);
}
