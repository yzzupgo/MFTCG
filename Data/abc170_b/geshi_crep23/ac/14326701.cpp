#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X>>Y;
if(Y%2!=0){
cout<<"No"<<endl;
}
else if(X*2>Y){
cout<<"No"<<endl;
}
else if(X*4<Y){
cout<<"No"<<endl;
}
else if(X*2==Y){
cout<<"Yes"<<endl;
}
else if(X*4==Y){
cout<<"Yes"<<endl;
}
else {
int A=X/2;
if(A-X<X){
cout<<"Yes"<<endl;
}
else {
cout<<"No"<<endl;
}
}
}
