#include <bits/stdc++.h>
using namespace std;
unsigned const tam=200005;
long long n, t;
bool ans;
int main()
{
cin>>n>>t;
cout<<max(max(n+t, n-t), n*t)<<"\n";
return 0;
}
