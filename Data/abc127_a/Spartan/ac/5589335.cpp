#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<cstdlib>
#include<unistd.h>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<utility>
#include<cmath>
#include<set>
#include<unordered_map>
#include<cstdio>
#include<map>
#include<numeric>
using namespace std;
#define F first
#define S second
#define mk(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define LINE cout<<"\n" ;
#define ok cout<<"ok\n" ;
#define dbg(x) cout<<#x<<" = "<<(x)<<"\n";
#define fill(A,VAL) memset(A, VAL, sizeof(A))
#define sz(a) ((int) a.size())
typedef long long ll ;
const int MAXN = 5*1e5 + 10;
int main () {
int A , B ;
cin >> A >> B ;
if(A <= 5) cout<<0<<endl;
else if(A > 5 && A <= 12) cout<<B/2<<endl;
else cout<<B<<endl;
return 0 ;
}
