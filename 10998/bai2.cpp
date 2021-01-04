#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

void NhapMang(int a[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        cout << "a[" << i <<"]: ";
        cin >> a[i]; 
    }
}


void XuatMang(int a[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void SapXep(int *a, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void Xoa(int a[], int &n, int pos){ //pos: vi tri muon xoa
    int i = pos;
    for(; i < n; i++){
        a[i] = a[i+1];
    }
    n--;
}

int maxArr(int *a, int n){
    int maxNum = a[0], i = 0;
    for(; i < n; i++){
        if(a[i] > maxNum){
            maxNum = a[i];
        }
    }
    return maxNum;
}
int main()
{
    int n, x;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if(n < 1){
            cout << "Nhap lai n: ";
        }
    } while (n < 1);
    int *a = new int[n];
    NhapMang(a,n);
    cout << "mang vua nhap: ";
    XuatMang(a,n);

    fstream ghiFile;
    ghiFile.open("ABC2016.txt", ios::out);
    int i;
    ghiFile << "Mang vua nhap :";
    for(i = 0; i < n; i++){
        ghiFile << a[i] << " ";
    }

    SapXep(a,n);
    ghiFile << "\nMang sau khi sap xep :";
    for(i = 0; i < n; i++){
        ghiFile << a[i] << " ";
    }

    cout << "\nNhap so nguyen x: ";
    cin >> x;

cout << "Cac phan tu co tri tuyet doi < x: ";
    for(i = 0; i < n; i++){
        if(abs(a[i])< x){
            cout << a[i] << " ";
        }
    }
    cout << "\nMax = " << maxArr(a,n) << endl;
    int temp = maxArr(a,n);
    for(i = 0; i < n; i++){
        if(a[i] == temp){
            Xoa(a,n,i);
        }
    }
    cout << "Mang sau khi xoa max: ";
    XuatMang(a,n);
}