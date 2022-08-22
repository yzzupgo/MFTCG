#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define in_range(x,y,r,c) (x>=0&&x<r&&y>=0&&y<c)
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin >> n;
int p = floor(1.08 * n);
if(p < 206) {
cout << "Yay!";
} else if(p == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
