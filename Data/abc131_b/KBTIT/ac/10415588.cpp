#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L,x;cin>>N>>L;
x=N*L+N*(N-1)/2;
if(N+L-1<0)x-=N+L-1;
if(L>0)x-=L;
cout<<x<<endl;
}
