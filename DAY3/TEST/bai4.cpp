#include<iostream>
using namespace std;

bool check(int n){
    if(n%2==0){
        for(int i = 2; i <= n - 2; i+=2){
            if((n-i)%2!=0){
                return false;
            }
        }
    }else{
        return true;
    }
}
int main(){
    int n;
    do{
        cin >> n;
    }while(n <= 0 || n > 100);

    if(check(n)){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
