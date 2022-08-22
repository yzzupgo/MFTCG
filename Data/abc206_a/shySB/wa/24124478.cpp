#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(1.08 * n > 206) {
cout << "Yay!";
return 0;
}
if(1.08 * n == 206) {
cout << "so-so";
return 0;
}
if(1.08 * n < 206) {
cout << ":(";
return 0;
}
}
