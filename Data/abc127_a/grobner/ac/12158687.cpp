#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define INF 1e9
#define PI 3.14159265359
#define MOD 1000000007
#define ALL(v) v.begin(),v.end()
#define ALLR(v) v.rbegin(),v.rend()
typedef long long ll;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
int main() {
cout << fixed << setprecision(10);
int a,b;
cin >> a >> b;
if(a>=13){
cout << b << endl;
}else if(a>=6){
cout << b/2 << endl;
}else{
cout << 0 << endl;
}
}
