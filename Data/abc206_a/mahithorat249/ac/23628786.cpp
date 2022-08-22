#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
int n;
cin >> n;
float res = 1.08 * n;
res = round(res);
if(res < 206) {
cout << "Yay!" << "\n";
} else if(res == 206.0) {
cout << "so-so" << "\n";
} else {
cout << ":(" << "\n";
}
return 0;
}
