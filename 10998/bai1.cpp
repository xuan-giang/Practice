#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &n)
{
    do
    {
        cin >> n;
        if (n < 1)
        {
            cout << "Nhap lai n: ";
        }
    } while (n < 1);
}

void nhap(float &x){
    cin >> x;
}
int F(int n)
{
    int i = 1, kq = 1;
    for (; i <= 2 * n - 1; i += 2)
    {
        kq *= i;
    }
    return kq;
}

float P(float x, int n)
{
    float kq = fabs(x);
    int i = 2;
    for (; i < n; i++)
    {
        kq += i /(float) F(i);
    }
    return kq;
}
int main()
{
    int n;
    float x;
    cout << "Nhap so nguyen duong n: ";
    nhap(n);
    cout << "Nhap so thuc x: ";
    nhap(x);
    cout << "Gia tri bieu thuc P(x,2n) = " << P(x, 2 * n);
}