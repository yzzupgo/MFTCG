#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X>>Y;
if(X*2==Y){
cout<<"Yes"<<endl;
}
else if(X*4==Y){
cout<<"Yes"<<endl;
}
else {
int A=Y/4;
int B=A/2;
if((A+B)==X){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
}
