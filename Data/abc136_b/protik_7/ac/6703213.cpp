#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d=0,m,c=0;
cin>>n;
m=n;
while(m>0){
d++;
m=m/10;
}
if(d==6){
c=c+90000;
d=d-2;
n=9999;
}
if(d==5){
c=c+(n-9999);
d--;
n=9999;
}
if(d==4){
c=c+900;
d=d-2;
n=99;
}
if(d==3){
c=c+(n-99);
d--;
n=99;
}
if(d==2){
c=c+9;
}
if(d==1){
c=c+n;
}
cout<<c<<endl;
return 0;
}
