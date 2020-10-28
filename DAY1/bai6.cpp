#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return (n%10) % 2 == 0 ? (n%10) + sum(n/10) : sum(n/10);
}
int main(){
    int a;
    do{
        cin >> a;
    }while(a < 100 || a > 999 );
    cout << sum(a) ;  
}
// #include<iostream>
// using namespace std;

// int sum(int n){
//     int sum1 = 0;
//     while (n>0)
//     {
//         if((n%10)%2==0){
//             sum1 += (n%10);
        
//         }
//         n/=10;
       
//     }
    
// }
// int main(){
//     int a,b,c;
//     do{
//         cin >> a >> b >> c;
//     }while(a < 0 || b < 0 || c < 0);
//     cout << sum(a) <<endl; 
//     cout << sum(b) <<endl; 
//     cout << sum(c) <<endl; 
// }
