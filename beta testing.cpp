#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	string v, x;
 	cin >> v >> x;
 	if (v.length() > x.length()){
 		x.resize(v.length(), '0');	
 	}
 	else if (x.length() > v.length()){
 		v.resize(x.length(), '0');
 		
 	}
 	for (int i=0; i< x.length(); i++){
 		if(x[i]>=v[i]){
 			cout << "Yes";
 			break;
 		}
 		else if (v[i] > x[i]){
 			cout << "No";
 			break;
 		}
 	}
 	return 0;
 }