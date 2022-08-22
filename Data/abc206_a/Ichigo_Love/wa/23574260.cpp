#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
ll N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(N * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
