#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define span(a) begin(a), end(a)
void hike() {
int n;
cin >> n;
double k = floor(1.08 * n);
if(k == 206) {
cout << "so-so";
} else if(k < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t = 1;
while(t--) {
hike();
}
return 0;
}
