#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a>=b)
cout<<"No";
else{
if(b>4*a)
cout<<"No";
else{
int res=b%(2*a);
if(res%2)
cout<<"No";
else
cout<<"Yes";
}
}
return 0;
}
