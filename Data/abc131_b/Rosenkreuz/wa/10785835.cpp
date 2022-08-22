#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,l;
cin>>n>>l;
long long r=l+n-1;
long long eat;
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
