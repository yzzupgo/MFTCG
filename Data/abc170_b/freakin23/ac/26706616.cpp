#include<bits/stdc++.h>
#define ll long long int
#define rep(x,start,end) for(auto x=start;x!=end;x++)
#define all(x) (x).begin(),(x).end()
#define INF (1<<29)
using namespace std;
const int MOD = 1e9+7;
int min_3(int x, int y, int z) { return min(min(x, y), z); }
int max_3(int x, int y, int z) { return max(max(x, y), z); }
void freakin23()
{
int x,y;
cin>>x>>y;
bool ok=false;
for(int i=0;i<100;i++)
{
for(int j=0;j<100;j++)
{
if((i+j)==x&&(i*2+4*j)==y)
ok=true;
}
}
if(ok)
cout<<"Yes"<<'\n';
else
cout<<"No"<<'\n';
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(nullptr);
cout.tie(0);
cin.exceptions(ios::badbit| ios::failbit);
freakin23();
cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
return 0;
}
