#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
int n;
cin >> n;
if(n < 10){
cout << n << endl;
}
else if(n < 100){
cout << 9 << endl;
}
else if(n < 1000){
cout << (n - 99) + 9 << endl;
}
else if(n < 10000){
cout << 908 << endl;
}
else{
cout << 909 << endl;
}
}
