#include<iostream>
using namespace std;
int main(){
    int i, j, n, k;
    j=0;
    //non prime numbers
    cout<< "Enter a natural number ";
    cin >> n;
    for(i=3;i<=n;i++) {
        k=0;
        for(j=2;j<i;j++) {
            if(i%j == 0) {
                k=1;
                break;
            }
        }
        if(k==1) {
        cout<< i<< endl; 
    }
        
    }
    return 0;

}