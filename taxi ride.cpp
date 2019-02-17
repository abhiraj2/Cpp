#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	int a, m,n, d;
 	cin >> a>> m>> n>> d;
 	int fare;
 	if (d>=a){
 
 	fare= (a*m)+((d-a)*n);
 	cout << fare;
 	}
 	else if( d< a){
 		fare = d*m;
 		cout << fare;
 	}
 	return 0;
 }