#include <bits/stdc++.h>
using namespace std;
int main () {
int x,y;
cin >> x >> y;
for(int i = 0; i<=x; i++) {
int a = x-i;
int b = i*2+a*4;
if(b==y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
