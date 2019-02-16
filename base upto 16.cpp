#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 int main()
 {
 	int t;
 	cin >>t;
 	int a[t][2];
 	for (int z=0; z<t; z++){
 		for(int y=0; y<2; y++){
 			cin >>a[z][y];
 		}
 	}
 	for (int k=0; k<t ; k++){
 		int r;
        	int temp = a[k][0];
 		int div = a[k][1];
        int f;
        for ( f=0; temp!=0; f++ ){
            temp = temp/div;
        }
        
 		int b[f];
    temp = a[k][0];
 		 div = a[k][1];
 	
 int i;
 		for (i=0; temp!=0; i++){
 			r= temp % div;
   temp = temp/div;         
 			b[i]=r;
 			}
 		for (int j=i-1; j>-1 ; j--){
 			switch(b[j]){
 				case 10:
 					cout << "A";
 					break;
 				case 11:
 					cout << "B";
 					break;
 				case 12:
 					cout << "C";
 					break;
 				case 13:
 					cout << "D";
 					break;
 				case 14:
 					cout << "E";
 					break;
 				case 15:
 					cout << "F";
 					break;	
 				default:
 					cout << b[j];					
 			}
 		}	
        cout << endl;
 		}
 		
 
 }