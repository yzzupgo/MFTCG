#include<bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int a = y - 2 * x;
if (a <= 0){
cout << "No" << endl;
return 0;
}
if (a % 2 == 0){
int b = a / 2;
if (b <= x ){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
