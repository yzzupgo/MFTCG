#include<bits/stdc++.h>
#define lli long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define ALL(x) x.begin(), x.end()
#define PI acos(-1.0)
#define nl cout<<"\n"
#define print(x) cout<<x<<endl;
#define mem(ar,val) memset(ar, val, sizeof(ar))
#define point(x) fixed<<setprecision(x)
#define printcase(n) cout << "Case " << tc << ": " << n <<endl;
#define printcaseii(n,m) cout << "Case " << tc << ": " << n << " " << m <<endl;
#define aInput(ar,n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v,n) for(int i=0; i<n; i++){lli xwq;cin>>xwq;v.push_back(xwq);}
#define input2D(ar,row,col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar,row,col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << "";}cout<<endl;}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar,n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define ANUPAM_AKIB ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define execution_time cerr<<endl;int z=30;while(z--){cerr<<'-';}cerr<<endl;cerr<<point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs"<<endl;
#define INPUT freopen("input.txt", "r", stdin)
#define OUTPUT freopen("output.txt", "w", stdout)
#define umap unordered_map
#define _IN input()
#define IN input()
#define yo(x) cout<<(#x)<<" = "<<(x)<<endl;
#define ff first
#define ss second
#define VEC vector<lli>
#define sz size()
using namespace std;
const lli inf = INT_MAX;
const int mod = 1e6 + 7;
lli findLCM(lli a, lli b) {
return ((a * b) / __gcd(a, b));
}
lli input() {
lli x;
cin >> x;
return x;
}
int digitCNT(int n) {
return ceil(log10(n) + 0.00000001);
}
string to_binary(lli num) {
if(num == 0) {
return "";
}
return to_binary(num / 2) + to_string(num % 2);
}
lli to_decimal(string s) {
lli r = 0, p = 1;
for(int i = s.sz - 1; i >= 0; i--) {
if(s[i] == '1') {
r += p;
}
p *= 2;
}
return r;
}
bool isPalindrome(string s) {
for(int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--) {
if(s[i] != s[j]) {
return 0;
}
}
return 1;
}
bool isPrime(lli n) {
if(n < 2) {
return false;
}
if(n == 2 || n == 3) {
return true;
}
if(n % 2 == 0) {
return false;
}
for(lli i = 3; i * i <= n; i += 2) {
if(n % i == 0) {
return false;
}
}
return true;
}
bool cmp(pair<lli, pair<lli, lli> > a, pair<lli, pair<lli, lli> > b) {
return a.ff > b.ff;
}
void solve(int tc) {
int n = IN;
int x = (1.08 * n);
if(x < 206) print("Yay!")
else if(x > 206) print(":(")
else print("so-so")
}
int main() {
ANUPAM_AKIB;
#ifndef ONLINE_JUDGE
clock_t tStart = clock();
INPUT;
OUTPUT;
#endif
int tc = 1;
for(int i = 1; i <= tc; i++) {
solve(i);
}
#ifndef ONLINE_JUDGE
execution_time;
#endif
return EXIT_SUCCESS;
}
