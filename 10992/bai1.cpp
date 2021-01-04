#include <iostream>
#include <math.h>
using namespace std;

void nhap(int &x)
{
    cin >> x;
}

void nhap(float &x)
{
    cin >> x;
}
int Tang1DonVi(int n)
{
    return n + 1;
}

float S(float x, int n)
{
    float result;
    if (n > 2)
    {
        result = sqrt(2019);
        int i = 1;
        for (; i <= n; i++)
        {
            result += pow(x + 1, i);
        }
    }
    else
    {
        result = fabs(x * (float)n);
    }
    return result;
}

float P(int n, float x)
{
    float result = 2020 * exp(abs(n));
    int i = 0;
    for (; i <= n; i++)
    {
        result += 3 * i;
    }
    return result;
}
int main()
{
    int n, i;
    float x;
    cout << "Nhap lan luot x, n: ";
    nhap(x);
    nhap(n);
    for (i = 0; i < 3; i++)
    {
        n = Tang1DonVi(n);
    }
    cout << "Ket qua: " << S(x, n) / P(n, x);
}