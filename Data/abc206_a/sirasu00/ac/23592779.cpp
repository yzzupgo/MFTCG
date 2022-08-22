#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
using namespace std;
using ll = long long ;
int main() {
int N;
cin >> N;
N *= 1.08;
if(N < 206) {
cout << "Yay!" << endl;
}
if(N == 206) {
cout << "so-so" << endl;
}
if(N > 206) {
cout << ":(" << endl;
}
return 0;
}
