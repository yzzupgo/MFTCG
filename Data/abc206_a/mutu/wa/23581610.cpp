#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using v = vector<int>;
using vv = vector<v>;
#define rep(i,a,n) for (int i = a; i < (int)(n); i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
int main() {
int N;
cin >> N;
int mon = N * 1.08;
cout << mon << endl;
if(mon < 206) {
cout << "Yay!" << endl;
} else if(mon == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
