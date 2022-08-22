#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c=0;
cin>>a>>b;
if(b%2==1)c=1;
else if(a*4<b)c=1;
else if(a>b)c=1;
if(c==0){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
