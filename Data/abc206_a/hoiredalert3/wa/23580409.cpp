#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define F first
#define S second
#define REP(i,a,b) for (int i=a; i<=b;++i)
void solve() {
int n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(n * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();
return 0;
}
