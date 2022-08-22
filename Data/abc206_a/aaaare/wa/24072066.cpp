#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,t,n) for (int i = t; i < (int)(n); i++)
int main() {
int M;
cin >> M;
int N = M * 108 / 100;
if(206 > N) {
cout << "Yey!" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
