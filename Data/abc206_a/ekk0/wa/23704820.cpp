#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
int N;
cin >> N;
int ans = (N * 108) / 100;
cout << ans;
if(ans == 206) {
cout << "so-so" << endl;
} else if(ans > 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
