#include<bits/stdc++.h>
using namespace std;
int main() {
int n, ans;
cin >> n;
double p = 1.06 * n;
ans = float(p);
if(ans == 206) {
cout << "so-so";
} else if(ans > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
}
