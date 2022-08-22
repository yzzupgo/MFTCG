#include<bits/stdc++.h>
using namespace std;
int main()
{
int N,M;cin>>N>>M;
if(4*N>=M&&2*N<=M&&(4*N-M)%2==0)cout<<"Yes";
else cout<<"No";
return 0;
}
