#include <iostream>
#include <fstream>
using namespace std;

void Nhap(int *a, int n){
    int i = 0;
    for(; i < n; i++){
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat(int *a, int n){
    int i = 0;
    for(; i < n; i++){
        cout << a[i] << " ";
    }
}

void SapXep(int *a, int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

void TachMang(int *a, int n, int *b, int *c){
    
}

bool check(int *a, int n){
    int  i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0 ){
            return false;
        }
    }
    for(i = 0; i < n - 2; i++){
        if(a[i] == a[i+1] == a[i+2]){
            return false;
        }
    }
    return true;
}

int main(){
    int n, nB = -1, nC = -1;
    cout << "Nhap n: ";
    do
    {
        cin >>  n;
        if(n < 1){
            cout << "Nhap lai n: ";
        }
    } while (n <  1);
    int *a = new int[n];
    Nhap(a,n);
    int *b = new int[n];
    int *c = new int[n];
    int i,j;
    for ( i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            nC++;
            c[nC] = a[i];
        }else
        {
            nB++;
            b[nB] = a[i];
        }
    }
    cout << "2 mang sau khi tach: " << endl;
    Xuat(b,nB+1);
    cout << endl;
    Xuat(c,nC+1);
    if(check(a,n)){
        cout << "\nHop le";
    }else
    {
        cout << "\nKhong hop le";
    }
    
    
}