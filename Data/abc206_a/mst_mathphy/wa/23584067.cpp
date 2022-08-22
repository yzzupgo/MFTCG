#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
int main() {
int N, n;
cin >> N;
n = N * 1.08;
n /= 1;
if(206 < n) {
cout << "Yay!" << endl;
} else if(N == n) {
cout << "so-so" << endl;
} else if(N < n) {
cout << ":(" << endl;
}
}
