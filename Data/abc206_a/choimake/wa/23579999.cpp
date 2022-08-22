#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (int)(a); i < (int)(b); ++i)
using namespace std;
using ll = long long;
int main() {
int N;
cin >> N;
if(floor(N * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(floor(N * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << "(:" << endl;
}
return 0;
}
