#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rrep(i,n) for (int i = 1; i < (int)(n); i++)
#define dunk(n) cout << n << endl
#define all(a) (a).begin(),(a).end()
typedef pair<int,int> P;
typedef long long ll;
int main() {
int x,y;
cin >> x >> y;
rep(i,x+1){
if(4*i + 2*(x-i) == y){
dunk("Yes");
return 0;
}
}
dunk("No");
return 0;
}
