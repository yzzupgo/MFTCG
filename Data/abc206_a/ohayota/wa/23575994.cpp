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
if(n == 206) {
cout << ":(";
}
cout << "so-so";
}
