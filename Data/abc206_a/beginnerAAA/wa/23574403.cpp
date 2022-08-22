#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
typedef long long ll;
int main() {
double a;
cin >> a;
a = 1.08 * a;
if(a < 206) {
cout << "Yay!" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
