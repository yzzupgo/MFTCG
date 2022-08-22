#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
double n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!";
}
if(n == 206) {
cout << "so-so";
}
if(n > 206) {
cout << ":(";
}
return 0;
}
