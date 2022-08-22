#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void) {
double n, a, b, c;
cin >> n;
ll ans = 0;
ans = ceil(n * 1.08);
if(ans == 206) {
cout << "so-so" << endl;
} else if(ans < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
