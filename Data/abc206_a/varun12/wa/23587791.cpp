#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
int main() {
double n;
cin >> n;
double k = 1.08;
double x = floor(n * 1.08);
if(x < 206) {
cout << "Yay!" << endl;
}
if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
