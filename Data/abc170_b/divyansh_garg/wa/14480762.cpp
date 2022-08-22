#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if( b > 4*a) {
cout<< "No" << endl;
return 0;
}
int x;
if( (4*a -b) % 2 !=0 ) {
cout<< "No" ;
return 0;
}
if( (b - 2*a) % 2 !=0) {
cout<< "No" ;
return 0;
}
x = ( 4*a - b) / 2;
int y;
y = (b - 2*a) / 2;
if( (x + y) == a && (2*x + 4*y) == b ) cout<< "Yes" << endl;
else cout<< "No" << endl;
return 0;
}
