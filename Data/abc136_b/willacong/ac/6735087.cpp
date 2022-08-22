#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define x first
#define y second
#define mp make_pair
#define forn(n) for(int i = 0; i < n; i++)
#define print(n) cout << n << "\n"
#define fprint(n) fout << n << "\n"
int n;
int ans = 0;
int main()
{
cin>>n;
for(int i = 1; i < 10 and i <= n; i++)
ans++;
for(int i = 100; i < 1000 and i <= n; i++)
ans++;
for(int i = 10000; i < 100000 and i <= n; i++)
ans++;
cout<<ans<<endl;
return 0;
}
