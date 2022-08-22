#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool flag = false;
int legs = 0;
for(int i=0; i<=X; i++){
int j = X-i;
legs = 2*i + 4*j;
if(legs == Y){
flag = true;
break;
}
}
if(flag)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
