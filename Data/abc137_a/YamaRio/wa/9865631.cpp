#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b;
cin >> a >> b;
int x=a+b;
int y=a-b;
int z=a*b;
if(x>y){
if(x>z) cout << x;
if(x<z) cout << z;
}
if(x<y){
if(y>z) cout << y;
if(y<z) cout << z;
}
cout << endl;
return 0;
}
