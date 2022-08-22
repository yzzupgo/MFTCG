#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define in1(x) cin >> x
#define in2(x,y) cin >> x >> y
#define in3(x,y,z) cin >> x >> y >> z
#define out(x) cout << x << endl
#define all(x) (x).begin(),(x).end()
using ll = long long;
using namespace std;
int main() {
int n;
cin >> n;
int a = floor(n * 1.08);
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
