#include <bits/stdc++.h>
using namespace std;
int main() {
double N;
cin >> N;
double a;
int ans;
a = 1.08 * N;
ans = a;
if(ans < 206) {
cout << "Yey!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
