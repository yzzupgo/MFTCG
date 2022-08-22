#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
#include<map>
#include<math.h>
#include<string>
#include <cctype>
#include <cstdlib>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define reps(i,s,n) for (int i = s; i < (int)(n); i++)
#define out(x) cout << x << endl
#define INF 1ll<<60;
using namespace std;
using ll = long long;
typedef pair<int, int> P;
int main(){
string s; cin >> s;
int size = s.size();
int cnt=0;
rep(i, stoi(s)){
string st=to_string(i);
if(st.size()%2==1) cnt++;
}
out(cnt-1);
}
