#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int f = N + L - 1;
int eat;
if(L >= 0) eat = L;
else if(f <= 0) eat = f;
else eat = 0;
int ans = (f*L)*(f-L+1)/2 - eat;
cout << ans << endl;
}
