#include<bits/stdc++.h>
using namespace std;
int main (void){
int x,y;
cin>>x>>y;
string ans;
for(int i=0;i<x;i++){
if(i*2+(x-i)*4==y)ans="YES";
else ans="No";
}
cout<<ans<<endl;
}
