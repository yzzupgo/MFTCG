#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for( int i=0; i<(n); i++)
int main() {
int n;
cin >> n;
if(20600 > n * 108) {
cout << "Yay!" << endl;
} else if(20600 <= n * 108 && n * 108 < 20700) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
