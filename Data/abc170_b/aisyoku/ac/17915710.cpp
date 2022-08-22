#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
int n=0;
cin >> X >> Y;
for(int i=0; i<=X; i++){
if(i*2 + (X-i)*4 == Y)
n++;
}
if(n>0)
cout << "Yes";
else
cout << "No";
}
