#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main() {
ll n;
cin >> n;
if(floor(1.08 * n) < 206) {
cout << "yay!" << endl;
} else if(floor(1.08 * n) == 206) {
cout << "so-so" << endl;
} else if(floor(1.08 * n) > 206) {
cout << ":(" << endl;
}
return 0;
}
