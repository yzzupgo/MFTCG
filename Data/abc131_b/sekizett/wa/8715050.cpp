#include<bits/stdc++.h>
using namespace std;
int main(){
long N,L;cin>>N>>L;
if(L>0)cout<<(2*L+N)*(N-1)/2;
else if(L+N-1<0)cout<<(2*L+N-2)*(N-1)/2;
else cout<<(2*L+N-1)*(N-1)/2;
}
