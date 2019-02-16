#include<iostream>
using namespace std;
int main(){
    int n, i, r, s =0;
    
    cin>> n;
    int j=n;
    for(i=0; i<3; i++){
        r = n% 10;
        n= (n-r)/10 ;
        s = s + (r*r*r) ;
        
    }
    if ( s== j) {
        cout<<"YES";
    }
    else {
    cout <<"NO";
}
    return 0;
}