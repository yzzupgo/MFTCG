#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int) (n); i++)
long long int INF=1001001000;
int main() {
int a,b;
cin >> a >> b;
if(a<=5) cout << 0 << endl;
else if(5<a<13) cout << b/2 << endl;
else cout << b << endl;
}
