#include <iostream>
#include <fstream>
using namespace std;
fstream coutFile;
void nhapMang(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void ghiFile_XuatMang(float *a, int n)
{

    coutFile.open("ABC2018.txt", ios::out);
    coutFile << "Mang vua nhap: ";
    for (int i = 0; i < n; i++)
    {
        coutFile << a[i] << " ";
    }
    cout << endl;
}

void sapXep(float *a, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void ghiFile_SapXep(float *a, int n)
{
    //  coutFile.open("ABC2018.txt", ios::out);
    //Neu mo file lan nua se bi ghi de, khong ghi bo sung duoc
    coutFile << "\nMang sau khi sap xep giam dan: ";
    for (int i = 0; i < n; i++)
    {
        coutFile << a[i] << " ";
    }
    cout << endl;
}

float min(float *a, int n)
{
    float MinA = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            MinA = a[i];
            break;
        }
    }
    if (MinA > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] < MinA && a[i] > 0)
                MinA = a[i];
        }
    }
    return MinA;
}

bool isInvalid(float *a, int n)
{
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (a[i] < 1 || a[i] + a[i + 1] <= 5)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float *a = new float(n);
    nhapMang(a, n);
    cout << "Mang vua nhap la: ";
    xuatMang(a, n);
    ghiFile_XuatMang(a, n);
    sapXep(a, n);
    ghiFile_SapXep(a, n);

    if (min(a, n) != -1)
    {
        cout << "Phan tu duong nho nhat : " << min(a, n) << endl;
    }
    else
    {
        cout << "Khong co phan tu duong trong day A" << endl;
    }
    if (isInvalid(a, n))
    {
        cout << "Day A hop le!" << endl;
    }
    else
    {
        cout << "Day A khong hop le!" << endl;
    }
}