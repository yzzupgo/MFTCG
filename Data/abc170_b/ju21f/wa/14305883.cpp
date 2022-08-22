#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y,N;
int a,b,c;
cin >> X >> Y;
a = X * 4 - Y;
if(( a >= 0 )&& (a % 2 == 0) ){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
