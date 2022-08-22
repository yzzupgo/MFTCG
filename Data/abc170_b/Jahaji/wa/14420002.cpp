#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef vector<pii> vpii;
typedef vector<pil> vpil;
typedef vector<pli> vpli;
typedef set<int> si;
typedef set<ll> sll;
typedef map<int, int> mii;
typedef map<int, ll> mil;
typedef map<ll, int> mli;
typedef map<ll, ll> mll;
const double pi = acos(-1.0);
const long long INF = 2e18;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define in insert
#define endl "\n"
#define sqr(a) ((a) *(a))
#define jor(a) !(a & 1)
#define bjor(a) (a & 1)
#define all(a) a.begin(), a.end()
#define mem(arr,b) memset(arr, b, sizeof(arr))
#define for0(i,b) for (int i = 0; i < (b); i++)
#define for1(i,b) for (int i = 1; i <= (b); i++)
#define forab(i,a,b) for (int i = (a); i <= (b); i++)
#define forba(i,b,a) for (int i = (b); i >= (a); i--)
#define rep(i,a,b,c) for (int i = (a); i != (b); i += (c))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fileRead freopen("input.txt", "r", stdin);
void print(int a[], int n)
{
for (int i = 0; i < n; i++) cout << a[i] << " ";
cout << endl;
}
int main()
{
IOS;
int x,y;
cin>>x>>y;
if((y - x*2)/2 <= x ) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
