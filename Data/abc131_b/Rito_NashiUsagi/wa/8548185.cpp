#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int L=l;
int R=l+n-1;
int eat;
if(R<=0) eat=R;
else if(L>=0) eat=L;
else eat=0;
cout<<eat<<endl;
}
