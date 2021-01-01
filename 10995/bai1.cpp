#include <iostream>
#include <math.h>
using namespace std;
void nhap(float &x, float &y)
{
    do
    {
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap y: ";
        cin >> y;
        if(x >= y){
            cout << "Khong hop le, vui long nhap lai: " << endl;
        }
    } while (x >= y);
}

float P(float x, float y){
    if(x < y){
        return exp(fabs(x)) + fabs(y) + sqrt(y-x);
    }else
    {
        return 1;
    }
    
}

float F(float x, int n){
    float result = 2020 * x;
    int i = 2;
    for(; i <= n; i++){
        result +=(float) pow(x,i) / pow(i,i);
    }
    return result;
}
int main()
{
    float x, y;
    int m;
    nhap(x, y);
    cout << "Nhap so nguyen duong m: ";
    do{
        cin >> m;
        if(m <= 0){
            cout << "Nhap lai so nguyen duong m: ";
        }
    }while (m <= 0);
    
    cout << "Gia tri cua P = " << P(x,y) << endl;
    cout << "Gia tri cua F = " << F(x,m) << endl;
    
}
