#include <iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<utility>
typedef long long ll;
#define rep0(i,n) for(int i=0; i < (int)(n); i++)
#define rep1(i,n) for(int i=1; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define fill(x,y) memset(x,y,sizeof(x))
#define debug1(i) cout << i << '\n'
#define debug2(i,j) cout << i << j << '\n'
using namespace std;
int main() {
int n, m;
cin >> n >> m;
if (m >= 0) {
cout << (m+1 + n + m - 1) * (n-1) / 2;
}
else {
if (m + n > 0)cout << (m + n + m - 1) * n / 2;
else cout << (m + m + n - 2) * (n - 1) / 2;
}
}
