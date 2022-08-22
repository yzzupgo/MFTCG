#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
int a=0;
for(int i=0;i<x+1;i++){
if(4*x-y-2*i==0){
cout<<"YES"<<endl;
a++;
break;
}
}
if(a==0)
cout<<"NO"<<endl;
}
