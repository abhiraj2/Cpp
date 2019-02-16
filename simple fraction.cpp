#include <iostream> 
using namespace std;
int main() { 
    int n1, n2, hcf; 
    cin >> n1 >> n2;
    if (n1 > n2){
    for(int i=1; i<= n2; ++i) {
        if (n2%i==0 && n1%i ==0){
            hcf= i;
        }
    }
    }
    else if(n1 < n2){
        for(int i=1; i<= n1; ++i) {
        if (n2%i==0 && n1%i ==0){
            hcf= i;
        }
    }
    }
    else hcf = n1;    
    int a = n1/hcf;
    int b = n2/hcf;
    cout << a << " " << b;
    return 0;
    }