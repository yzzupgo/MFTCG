#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define pb push_back
signed main() {
IOS;
{
float n;
cin >> n;
int y = 206;
float x = (1.08) * n;
if(x == y) {
cout << "so-so" << endl;
} else {
if(x < y) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
}
}
}
