#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
int t,k,temp;
cin >> X >> Y;
if(X<=100 && Y<=100){
if(X<Y){
k = (Y - (X * 2))/2;
t = X - k;
if(t<0){
t = 0;
}
}
}
temp = k*4 + t*2;
if(temp == Y){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
