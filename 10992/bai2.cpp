#include <iostream>
#include <math.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

void NhapMang(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
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

void Xoa(int a[], int &n, int pos)
{ //pos: vi tri muon xoa
    int i = pos;
    for (; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void Chen(int *a, int &n, int number)
{
    int i;
    for (i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = number;
    ++n;
}

int main()
{
    int n;
    cout << "Nhap n: ";
    do
    {
        cin >> n;
        if (n < 1)
        {
            cout << "Nhap lai n: ";
        }
    } while (n < 1);
    int *a = new int[n];
    //int *a = (int *)malloc(n * sizeof(int));
    NhapMang(a, n);
    cout << "Mang vua nhap: ";
    XuatMang(a, n);

    fstream ghiFile, ghiFile1;
    ghiFile.open("ABC2014.txt", ios::out);
    int i;
    ghiFile << "Mang vua nhap :";
    for (i = 0; i < n; i++)
    {
        ghiFile << a[i] << " ";
    }

    ghiFile1.open("XYZ2014.txt", ios::out);
    SapXep(a, n);
    ghiFile1 << "Mang sau khi sap xep :";
    for (i = 0; i < n; i++)
    {
        ghiFile1 << a[i] << " ";
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            Xoa(a, n, i);
        }
    }
    cout << "\nMang sau khi xoa so chan: ";
    XuatMang(a, n);

    int nTemp = n;
    for (i = 0; i < nTemp; i++)
    {
        if (a[i] < 0)
        {
            Chen(a, n, a[i]);
            ++i;
        }
    }

    cout << "\nMang sau khi sao chep so am: ";
    XuatMang(a, n);
}