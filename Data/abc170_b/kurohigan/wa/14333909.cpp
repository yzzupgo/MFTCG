#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if( X - (Y-2*X)/2 >= 0 && (Y-2*X)/2 >= 0 ){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
