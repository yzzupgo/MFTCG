#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin>>N>>L;
vector<int>A(N);
for(int i=0;i<N;i++)
A.at(i)=L+i;
int total=0;
for(int x:A)
total+=x;
int ans=max(total,A.at(0))-min(total,A.at(0));
for(int x:A){
ans=max(total,x)-min(total,x);
}
cout<<ans;
}
