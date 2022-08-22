#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
float temp;
cin>>x>>y;
temp=(4*x-y)/2.0;
if(temp<0)
cout<<"No"<<endl;
else if(y<=x)
cout<<"No"<<endl;
else if(2*temp>y)
cout<<"No"<<endl;
else if((int)temp==temp)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
