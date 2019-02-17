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
	cout << i<< " ";
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
	cout << i<< " ";
}

 int main()
 {
 	float number;
 	cin >> number;
 	floor(number);
 	ceil(number);
 	return 0;
 }