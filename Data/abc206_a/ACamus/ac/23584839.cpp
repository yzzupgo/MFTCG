#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vint;
typedef vector<vector<int> > vvint;
typedef vector<long long> vll;
typedef vector<vector<long long> > vvll;
typedef vector<string> vst;
typedef vector<bool> vbo;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define PB push_back
int main() {
int n;
cin >> n;
if(n < 191) {
cout << "Yay!" << endl;
} else if(n == 191) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
