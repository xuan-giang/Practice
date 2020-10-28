#include<iostream>
using namespace std;


int main(){
    int n;
    do{
        cin >> n;
    }while(n < 0 || n > 100);

    cout << 2 * n;
}
