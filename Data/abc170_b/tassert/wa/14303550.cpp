#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int doubleT = Y-2*X;
if(doubleT < 0){
cout << "No";
return 0;
}
int doubleC = 2*X -doubleT;
if(doubleC <0){
cout << "No";
return 0;
}
cout << "Yes";
return 0;
}
