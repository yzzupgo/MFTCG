#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second
#define all(v) v.begin(),v.end()
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
const string YESNO[2] = {"NO", "YES"};
const string YesNo[2] = {"No", "Yes"};
const string yesno[2] = {"no", "yes"};
void YES(bool t = 1) { cout << YESNO[t] << endl; }
void Yes(bool t = 1) { cout << YesNo[t] << endl; }
void yes(bool t = 1) { cout << yesno[t] << endl; }
const int mxN = 1e5+1,mxM=1e5+1;
int n,m;
int a[mxN],b[mxN],c[mxM];
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
cin>>n>>m;
Yes(m%2==0 && m<=4*n && m>=2*n);
}
