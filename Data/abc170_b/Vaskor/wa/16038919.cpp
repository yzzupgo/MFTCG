#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int arra[500];
int arra2[500];
for(int i=1;i<=100;i++) {
int x=pow(2,i);
if(x>100) {
break;
}
else {
arra[i]=x;
}
}
for(int i=1;i<=100;i++) {
int x=pow(4,i);
if(x>100) {
break;
}
else {
arra2[i]=x;
}
}
if(y%2!=0) {
cout<<"NO"<<endl;
}
else {
if(arra[x]<y && arra2[x]<y) {
cout<<"NO"<<endl;
}
else {
cout<<"YES"<<endl;
}
}
}
