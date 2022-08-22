#include <bits/stdc++.h>
using namespace std;
int main(){
long long X, Y;
cin >> X >> Y;
int doubleT = Y-2*X;
if(doubleT < 0){
cout << "No";
return 0;
}
int doubleC = 4*X - Y;
if(doubleC < 0){
cout << "No";
return 0;
}
if(doubleC+doubleT != 2*X){
cout << "No";
return 0;
}
cout << "Yes";
return 0;
}
