#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int r=l+n-1;
int eat;
if(l>0){
eat=l;
}
if(r<0){
eat=r;
}
else{
eat=0;
}
cout<<(l+r)*n/2 -eat<<endl;
return 0;
}
