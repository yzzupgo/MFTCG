#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if( 2*X - (Y-2*X) >= 0 && (Y-2*X) >= 0 ){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
