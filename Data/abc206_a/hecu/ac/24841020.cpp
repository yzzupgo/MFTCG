#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
int main(void) {
std::ios::sync_with_stdio(false);
std::cin.tie(0);
int n;
cin >> n;
int a = 1.08 * n;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
