#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef vector<int> vi;
typedef pair<int, int> pi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
void solve() {
int n;
int a, b, c;
cin >> n;
double x = n * 1.08;
int ans = floor(x);
if(x < 200) {
cout << "Yay!";
} else if(x == 200) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int n = 1;
while(n--) {
solve();
}
}
