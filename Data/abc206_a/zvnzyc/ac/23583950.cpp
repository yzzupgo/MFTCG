#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < (n); i++)
#define ALL(v) v.begin(), v.end()
#define INF 2e9
using ll = long long;
using P = pair<int, int>;
int main() {
int n;
cin >> n;
if(floor((1.08)*n) < 206) {
cout << "Yay!" << endl;
} else if(floor((1.08)*n) == 206) {
cout << "so-so" << endl;
} else if(floor((1.08)*n) > 206) {
cout << ":( " << endl;
}
return 0;
}
