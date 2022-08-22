#include <bits/stdc++.h>
#define rep(i,a,n) for (int i = a; i < n; i++)
#define ifaxb(a,x,b) if (a < x && x < b)
#define vi vector<int>
#define vii vector<vi>
#define vs vector<string>
#define vss vector<vs>
#define all(x) x.begin(), x.end()
#define pi 3.1415926536
#define ff first
#define ss second
#define pq priority_queue
#define ipair pair<int, int>
#define spair pair<string, string>
#define lpair pair<LL, LL>
#define MP make_pair
#define INF 2147483647
#define _INF -2147483647
#define MM multimap
#define PB push_back
#define MAXN 100004
using namespace std;
typedef long long ll;
int main() {
int A, B;
cin >> A >> B;
if (A >= 13) {
cout << B << endl;
} else if (6 <= A && A <= 12) {
cout << B / 2 << endl;
} else {
cout << 0 << endl;
}
return 0;
}
