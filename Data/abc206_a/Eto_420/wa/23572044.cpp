#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag = false;
int main() {
int N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(N * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
