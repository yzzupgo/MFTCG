#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
int a[10 ^ 9], n, m = 0;
cin >> n;
for(int i = 0; i < n; i++) {
cin >> a[i];
for(int j = 0; j < i; j++) {
if(a[j] != a[i]) {
m++;
}
}
}
cout << m;
return 0;
}
