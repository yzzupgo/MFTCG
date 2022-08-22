#include<bits/stdc++.h>
#include <time.h>
using namespace std;
#include <math.h>
#define ll long long
#define max1 1000007
long long int mod =1e9+7;
int main(){
int x,y;
cin>>x>>y;
if((y-2*x)<0){
cout<<"No"<<endl;
}
else if( (y-2*x)%2==1){
cout<<"No"<<endl;
}
else{
int b=(y- 2*x)/2;
if(b>x){
cout<<"No"<<endl;
}
else{
cout<<"Yes"<<endl;
}
}
}
