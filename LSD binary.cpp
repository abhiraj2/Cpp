#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	int t; 
 	cin>> t;
 	int a[t];
 	for (int z=0; z<t; z++){
 		cin >> a[z];
 	}
 	for (int i=0; i<t; i++){
 		int temp= a[i];
 		int r;
 		r=temp%2;
 		if (r==0){
 			cout << "No"<< endl;
 		}
 		else {
 			cout << "Yes"<< endl;
 		}
 	}
 	return 0;
 }