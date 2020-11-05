#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2;

    do
    {
        cin >> x1 >> y1 >> x2 >> y2;
    }
    while(x1 == x2 || y1 == y2 || x1 < 0 || y2 > 100);

    cout << abs((y1 - y2) * (x1 - x2));
}
