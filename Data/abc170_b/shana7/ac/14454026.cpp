#include<bits/stdc++.h>
using namespace std;
#define all(v) ((v).begin()), ((v).end())
#define allr(v) ((v).rbegin()), ((v).rend())
#define sz(v) ((int)((v).size()))
#define ll long long
#define pb push_back
#define fIO ios_base::sync_with_stdio(0);cin.tie(0);
const ll oo = 1e8;
const double pi = 3.1415926535897;
const double EPS = (1e-7);
int dcmp(double x, double y) { return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1; }
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector< vi > vvi;
typedef vector< vd > vvd;
typedef vector<string> vs;
typedef pair<int, int> pii;
struct edge{
int from, to, w;
edge(){}
edge(int x, int y, int we): from(x), to(y), w(we){}
bool operator < (const edge &rhs) const{
return w > rhs.w;
}
};
int main(){
fIO
int x, y;
cin >> x >> y;
int tot = y - 2 * x;
if(tot >= 0 && tot % 2 == 0 && (x - tot / 2) >= 0) cout << "Yes";
else cout << "No";
}
