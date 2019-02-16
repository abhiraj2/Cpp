#include <iostream>
using namespace std;
 int ceil(float n){
	int i;
  i =int(n-2);
	while (i<=n){
        if (i == n){
        break;
    }
        i++;
    }
	return i;
}
int floor(float n){
	int i;
  i =int(n+2);
	while (i>=n){
        if (i == n){
        break;
    }
        i--;
    }
	return i;
}

 int main()
 {
 	int n;
 	cin >> n;
 	int a[n];
 	for(int z=0; z<n; z++){
 		cin >> a[z];
 	}
 	int sum =0;
 	for (int i= 0; i<n ; i++){
 		sum = sum +a[i];
 	}
 	float average = sum/n;
 	float frac = average - floor(average);
 	if(frac > 0.5){
 		cout << ceil(average);
 		
 	}
 	else if (frac =0.5){
 		if (ceil(average)%2==0){
 			cout<< ceil(average);
 		}
 		else {
 			cout << floor(average);
 		}
 	}
 	else{
 		cout << floor(average);
 	}
 }