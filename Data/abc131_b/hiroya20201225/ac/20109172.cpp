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
int ans=max(total,total-A.at(0))-min(total,total-A.at(0));
int mark=A.at(0);
for(int x:A){
if(ans>(max(total,total-x)-min(total,total-x))){
ans=(max(total,total-x)-min(total,total-x));
mark=x;
}
}
cout<<total-mark;
}
