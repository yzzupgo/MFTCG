#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
bool NotFound = true;
for( int i = 0; i <= 100; ++i ){
for( int j = 0; j <= 100; ++j ){
if( i+j ==X && 2*i+4*j == Y){
NotFound = false;
}
}
}
if( NotFound ){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
}
