#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define trep(i,n) for(int i = 0; i < (n); i += 2)
#define rrep(i,n) for(int i = (n); i > 0; --i)
#define arep(i,n) for(auto& i : n)
using ll = long long;
using namespace std;
int main() {
int n;
cin >> n;
n = floor(n * 1.08);
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
