#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,d;
cin>>a>>b;
for(int i=0;i<a;i++){
if(b%4==0){
cout<<"Yes"<<endl;
break;
}
else if(b%2==0){
cout<<"Yes"<<endl;
break;
}
b-=2;
d=b/4+b%4;
if(d>=0&&d==a-i+1){
cout<<"Yes"<<endl;
break;
}
else if(d==0){
cout <<"Yes"<<endl;
break;
}
else if(i==a-1){
cout <<"No"<<endl;
}
}
}
