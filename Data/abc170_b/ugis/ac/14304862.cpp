#include<bits/stdc++.h>
using namespace std;
using i64 = int_fast64_t;
#define rep(i,N) for(i64 i = 0; i < N; i++)
#define Rep(i,k,N) for(i64 i = k; i < N; i++)
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define Cout(s) cout << s << endl
string Yes(bool b) {if(b){return "Yes";} else {return "No";}}
string YES(bool b) {if(b){return "YES";} else {return "NO";}}
int main(){
int X, Y;
cin >> X >> Y;
int a = 4*X - Y;
if( 0 <= a && a/2 <= X && a % 2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
