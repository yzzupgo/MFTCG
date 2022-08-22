#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
int a;
cin >> X >> Y;
a = X * 4 - Y;
if(( a >= 0 )&& (a % 2 == 0) &&( a / 2 <= X) ){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
