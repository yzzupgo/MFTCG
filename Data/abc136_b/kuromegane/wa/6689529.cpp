#include <bits/stdc++.h>
#define ipair pair<int,int>
#define rep(i,n) for(i=0;i<n;i++)
#define repj(i,j,n) for(i=j;i<n;i++)
#define PB(a,i) (a).push_back(i)
#define ALL(a) (a).begin(),(a).end()
#define SIZE(a,n) (a).resize(n)
#define SORT(a) sort(ALL(a))
#define VSORT(a,type) sort(ALL(a),greater<type>())
#define MAPIN(a,i,j) (a).insert(make_pair(i,j))
#define OK(i) cout<<"OK "<<i<<endl
#define Yes cout<<"Yes"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define NO cout<<"NO"<<endl
using namespace std;
typedef long long int lli;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector< vi > Matrix;
int main() {
int n, i, j;
bool t;
cin >> n;
j = 1;
i = 0;
while (n / j > 0) {
if (j*10 <= n) {
i += j * 9;
}
else {
i += n % j + 1;
}
j *= 100;
}
cout << i << endl;
return 0;
}
