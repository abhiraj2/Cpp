#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	int n;
 	cin >> n;
	int i = n%10;
 	switch(i){
 		case 1 :
 			cout << n<<"st";
 			break;
 		case 2 :
 			cout << n<<"nd";
 			break;
 		case 3 :
 			cout << n<<"rd";
 			break;
 		default :
 			cout << n<<"th";			
 	}
 	return 0;
 	
 }