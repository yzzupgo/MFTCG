#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii ;
typedef pair<long long,long long> pll;
typedef int imt;
string CK, CG;
#define _(x) cout << CK << #x << " = " << x << CG << " ";
#define __(x) cout << CK << #x << " = " << x << CG <<endl;;
void debuggerColorOn(){ CK = "\033[92m"; CG = "\033[0m"; system(""); }
void inputDebug(){ freopen("input.txt", "r", stdin); }
void outputDebug(){ freopen("output.txt", "w", stdout); }
const int N = 100005;
ll n,m,k,x,y;
void yes_no(bool b){
if(b) cout << "Yes" << endl;
else cout << "No" << endl;
}
void input(){
cin >> x >> y;
yes_no(x*2 <= y && y <= x*4 && y % 2 == 0);
}
void solve(){
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(0);
input();
solve();
}
