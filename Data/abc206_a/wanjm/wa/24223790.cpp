#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
if(n * 1.08 > 206) {
cout << ":(";
}
if(n * 1.08 == 206) {
cout << "so-so";
}
if(n * 1.08 < 206) {
cout << "Yay!";
}
return 0;
}
