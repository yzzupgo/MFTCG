#include <bits/stdc++.h>
int main() {
using namespace std;
ios_base::sync_with_stdio(false), cin.tie(nullptr);
int64_t N;
cin >> N;
double y = N * (double)1.08;
int64_t x = (int64_t)y;
if(x == 206) {
cout << "so-so" << '\n';
} else if(x < 206) {
cout << "Yay!" << '\n';
} else {
cout << ":(" << '\n';
}
return 0;
}
