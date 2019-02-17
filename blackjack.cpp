#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	int a , b , sum;
 	cin >> a >> b;
 	sum = a + b;
 	if (sum <= 21){
 		cout << sum;
 	}
 	else if ( sum > 21){
 		if (a == 11){
 			a=1;
 			sum = a+b;
 			cout << sum ;
 		}
 		else if (b == 11){
 			b =1;
 			sum = a+b ;
 			cout << sum;
 			
 		}
 		else cout << "0";
 	}
 		
 }