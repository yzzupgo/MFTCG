#include<bits/stdc++.h>
using namespace std;
int main(void) {
double n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!";
return 0;
}
if(206 <= n && n < 207) {
cout << ":(";
}
cout << "so-so";
}
