#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
bool a=false;
for(int i=0;i<x+1;i++){
if(4*x-y-2*i==0){
a=true;
break;
}
}
if(a)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
