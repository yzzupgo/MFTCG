#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i = 0; i < a; i++)
#define INF INT_MAX / 2
int main() {
int n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(n * 1.08 == 206) {
cout << "so-so" << endl;
} else if(n * 1.08 > 206) {
cout << ":(" << endl;
}
}
