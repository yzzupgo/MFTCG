#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < (int)(n); i++)
#define REP2(i,a,b) for (int i = (a); i < (int)(b); i++)
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long ll;
#define ALL(V) V.begin(), V.end()
template<class T,class U>bool chmin(T&a,const U&b){if(a<=b)return false;a=b;return true;}
template<class T,class U>bool chmax(T&a,const U&b){if(a>=b)return false;a=b;return true;}
int Main(int N)
{
int d = to_string(N).size();
if(d == 1) {
return N;
}
else if(d == 2) {
return 9;
}
else if(d == 3) {
return 9 + N - 100;
}
else if(d == 4) {
return 909;
}
else if(d == 5) {
return 909 + N - 10000;
}
else if(d == 6) {
return 90909;
}
else {
return -1;
}
}
int main(void){
int N;
cin >> N;
cout << Main(N) << endl;
return 0;
}
