#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool A=false;
for (int i=0; i<=100; i++){
if (2*i+4*(X-i)==Y){
A = true;
break;
}
}
if (A)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
