#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i <(n); ++i)
int main() {
int N;
cin >> N;
int ans = N * 1.08;
if(ans < 206) {
cout << "Yay!" << "\n";
} else if(ans == 206) {
cout << "so-so" << "\n";
} else {
cout << ":(" << "\n";
}
}
