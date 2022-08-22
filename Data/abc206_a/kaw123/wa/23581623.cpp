#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,c) for(int i=0; i<c; i++)
const int INF = 100100100;
int r[2001][2001];
int main() {
int n;
cin >> n;
n *= 1.08;
if(n <= 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
