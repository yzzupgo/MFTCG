#include <bits/stdc++.h>
using namespace std ;
int main(){
int N,L;cin>>N>>L;
if(L>=0) cout << (L+1+L+N-1)*(N-1)/2;
else if(L+N-1<0) cout << (L+L+N-2)*(N-1)/2;
else cout << (L+L+N-1)*N/2;
}
