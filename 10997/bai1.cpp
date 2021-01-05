#include <iostream>
#include <math.h>
using namespace std;

int giaiThua(int n){
    if(n ==  1){
        return 1;
    }

    return n * giaiThua(n - 1);
}

float P(float x, int n){
    float result = 2020 * exp(fabs(x));
    int i = 1;
    for(; i <= n + 1; i++){
        result += pow(x,i);
    }
    return result * (1/(float)giaiThua(n));
}

float K(float x, int n, int m){
    m = float (m);
    n = (float) n;
    return (P(x,n) + P(x,m))/P(x,n+m);
}


int main(){
    int m,n;
    float x,Q;
    cout << "Nhap lan luot x, n, m: ";
    cin >> x >> n >> m;
    Q = K(x,n,m) + P(x,n) + P(x,m);
    cout << "ket qua = " << Q << endl;
    cout << P(x,n) << "\n" << K(x,n,m);
    //cout << giaiThua(5);
}