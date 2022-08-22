#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
if(L>=1)cout << (L-1)*(N-1)+N*(N+1)/2-1 << endl;
else{
int ans=L;
int sum=(L-1)*N+N*(N+1)/2;
for(int i=2;i<N+1;i++){
if(abs(ans)>abs(L-1+i))ans=L-1+i;
}
cout << sum-ans << endl;
}
}
