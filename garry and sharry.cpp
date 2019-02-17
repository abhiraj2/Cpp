#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	int a[2][3];
 	for (int i = 0; i<2; i++){
 		for (int j=0; j<3 ; j++)
 		cin >> a[i][j];
 	}
 	int sum1 = 0, sum2= 0;
 	for (int j=0; j<3 ; j++){
 		sum1 = sum1 + a[0][j];
 	}
 	for (int j=0; j<3 ; j++){
 		sum2 = sum2 + a[1][j];
 	}
 	if (sum1 >sum2){
 		cout << "Garry "<< sum1-sum2;
 	}
 	else if(sum2< sum1){
 		cout << "Sharry "<< sum2-sum1;
 	}
 	else{
 		cout << "None "<<sum2-sum1;
 	}
 	
 	return 0;
 }