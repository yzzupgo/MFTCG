#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >>X>>Y;
int v = (X*4-Y);
if(v%2==0&&v>=0&&v/2<=X){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
