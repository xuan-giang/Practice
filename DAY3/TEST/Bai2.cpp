#include<iostream>

using namespace std;

int main()
{
    string number;
    getline(cin, number);
    int sum = 0;
    for(int i = 0; i < number.length(); i++)
    {
        sum += (number[i] - 48) * 1;
    }
    cout << sum;
}
