#include<bits/stdc++.h>
using namespace std;
int main(void) {
int n;
cin >> n;
n = int(n * 1.08);
if(n < 206) {
cout << "Yay!";
return 0;
}
if(206 == n) {
cout << "so-so";
return 0;
}
cout << ":(";
}
