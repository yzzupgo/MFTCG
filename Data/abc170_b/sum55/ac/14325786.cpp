#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int a=2*x-(y/2);
int b=(y/2-x);
if((y-2*x)<0 || (2*x-(y/2))<0){
cout<<"No"<<"\n";
return 0;
}
else if(a+b !=x){
cout<<"No"<<"\n";
return 0;
}
else if(2*a+4*b!=y) {
cout<<"No"<<"\n";
return 0;
}
cout<<"Yes"<<"\n";
return 0;
}
