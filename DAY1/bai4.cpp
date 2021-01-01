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
    if(điều kiện 1){
        câu lệnh khi điều kiện 1 đúng
    }else if (điều kiện 2)
    {
        câu lệnh khi điều kiện 2 đúng
    }else if (điều kiện 3)
    {
        câu lệnh khi điều kiện 3 đúng
    }
    ...
    else{
        câu lệnh khi các điều kiện trên sai
    }
    
    
}
