#include<iostream>
using namespace std;

int main(){
    int n = 898149;
    int even = 0;
    int odd = 0 ;
    while(n != 0){
        cout << "Enter an integer: ";
        cin >> n ;
        if(n%2==0 && n!=0){
            even = even+1;
        }
        if(n%2!=0 && n!=0){
            odd = odd+1;
        }
    }
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd ;
    return 0;
}

