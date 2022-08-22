#include<bits/stdc++.h>
#include <math.h>
using namespace std;
const double pi=acos(-1.0);
int max(int a,int b){if(a>b){return a;}return b;}
int min(int a,int b){if(a<b){return a;}return b;}
int main(void){
int x,y,z;
cin>>x>>y;
for(int i=0;i<=x;++i){
z=y;
z=i*4;
if(z==(x-i)*2){cout<<"Yes"<< i<<endl;return 0;}
}
cout<<"No"<<endl;
return 0;
}
