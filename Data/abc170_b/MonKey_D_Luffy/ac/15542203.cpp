#include<bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin>>X>>Y;
int c,t;
t=(Y/2)-X;
c=X-t;
if((t>=0 && c>=0) && (Y%2==0 && c+t==X)){
cout<<"Yes";}else{
cout<<"No";}
}
