#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
double a,b;
a=(4*X-Y)/2;
b=(Y-2*X)/2;
if(ceil(a) == floor(a) && ceil(b) == floor(b) && a>=0 && b>=0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
