#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
int main(){
int x,y;
cin >> x >> y;
if(y%2!=0){
cout << "No" << endl;
return 0;
}
y /= 2;
int a = y-x;
int b = 2*x-y;
if(a>=0 && b>=0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
