#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
ll N,A; cin>>N>>A;
ll L,R;
L=A;
R=A+N-1;
ll eat;
if(R<=0) eat=R;
else if(L>=0) eat=L;
else eat=0;
cout<<(R+L)*(R-L+1)/2-eat<<endl;
}
