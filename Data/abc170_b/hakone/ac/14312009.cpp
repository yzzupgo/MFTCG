#include <bits/stdc++.h>
using namespace std;
#define vint vector<int>
#define vvint vector<vint>
#define sint stack<int>
#define qint queue<int>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(x) (x).begin(),(x).end()
#define ct(a) cout << a << endl
#define iceil(a,b) (a+(b-1))/b
vint CinLine(int N){vint v(N);for(int i=0;i<N;i++){cin >> v.at(i);}return v;}
void CoutLine(vint v){for(int i=0;i<v.size()-1;i++){cout<<v.at(i)<<" ";}cout << v.at(v.size()-1)<<endl;}
int main() {
int x,y;
bool isOK = false;
cin >> x >> y;
for(int t = 0 ; t <= x ; t++){
for(int k = (x-t) ; k+t <= x ; k++) {
if((t*2 + k*4 == y) || (t*4 + k*2 == y)){
isOK = true;
break;
}
}
if(isOK){
break;
}
}
if(isOK) ct("Yes");
else ct("No");
}
