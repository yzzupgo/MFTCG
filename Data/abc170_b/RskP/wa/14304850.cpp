#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
int a,b;
bool c=true;
for(int i=0;i<X;i++){
a=i,b=X-i;
if(4*a+2*b==Y){
cout <<"Yes" << endl;
c=false;
break;
}
}
if(c){
cout << "No" << endl;
}
}
