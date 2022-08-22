#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int a;
cin >> a ;
if(a * 108 / 100 > 206) {
cout << ":(" << endl;
} else if(a * 108 / 100 < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
