#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
double ans = n * 1.08;
if(ans > 207) {
cout << ":(" << endl;
} else if(ans < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
cout << ans;
}
