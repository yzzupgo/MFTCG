#include <bits/stdc++.h>
using namespace std;
const int INF = 100000000;
typedef pair<int, int> P;
int main() {
int n;
cin >> n;
int a = n * 1.08;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
