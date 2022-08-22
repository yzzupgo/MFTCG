#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
ll N, L;
cin >> N >> L;
ll res = L*N + N*(N-1)/2;
if(L>0) cout<<(res-L)<<endl;
else if(L+N-1<0) cout<<(res-L-N+1)<<endl;
else cout<<res<<endl;
return 0;
}
