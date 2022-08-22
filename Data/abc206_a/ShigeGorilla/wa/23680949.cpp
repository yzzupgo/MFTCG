#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
n = 1.08 * n;
if(n < 260) {
cout << "Yay!";
} else if(n == 260) {
cout << "so-so";
} else if(n > 260) {
cout << ":(";
}
return 0;
}
