#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
int a=0;
for(int i=0;i<=X;i++){
if(i*2 + (X-i)*4 == Y){
cout << "Yes" << endl;
a=1;
break;
}
}
if(a==0){
cout << "No" << endl;
}
}
