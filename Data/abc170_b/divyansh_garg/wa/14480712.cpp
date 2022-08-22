#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int x;
x = ( 4*a - b) / 2;
int y;
y = (b - 2*a) / 2;
if( x + y == a ) cout<< "Yes" << endl;
else cout<< "No" << endl;
}
