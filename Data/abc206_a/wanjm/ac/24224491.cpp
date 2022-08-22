#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
n = n * 1.08;
n = n + 0.5;
int a = n;
if(a > 206) {
cout << ":(";
}
if(a == 206) {
cout << "so-so";
}
if(a < 206) {
cout << "Yay!";
}
return 0;
}
