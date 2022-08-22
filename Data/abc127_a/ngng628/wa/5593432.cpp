# include <bits/stdc++.h>
#define rep(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
#define reps(i,n) for(int i=1, i ##_len=(n); i<=i ##_len; ++i)
#define rrep(i,n) for(int i=((int)(n)-1); i>=0; --i)
#define rreps(i,n) for(int i=((int)(n)); i>0; --i)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define pb push_back
#define optimize_cin() cin.tie(0); ios::sync_with_stdio(false)
#define MSG(x) std::cout << #x << " : " << x << "\n";
using namespace std;
using lint = long long;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main()
{
int A, B;
cin >> A >> B;
if (A <= 5)
{
cout << 0 << endl;
}
else if (A <= 6 && A <= 12)
{
cout << B / 2 << endl;
}
else
{
cout << B << endl;
}
return 0;
}
