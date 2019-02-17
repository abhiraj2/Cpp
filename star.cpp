#include<iostream>

using namespace std;
int main(){
    string star = "*";
    string j = star;
    int i= 0;
    while (i == 0){
        cin.get();
        cout <<  star;
        star = j + star;
    }
    return 0;
}