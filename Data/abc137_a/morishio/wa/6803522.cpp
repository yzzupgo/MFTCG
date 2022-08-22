#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
int A, B;
cin >> A >> B;
int m = A + B;
if (m > A - B){
m = A - B;
}
if (m > A * B){
m = A * B;
}
cout << m << endl;
}
