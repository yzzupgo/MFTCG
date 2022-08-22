#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
int main() {
int N, x;
cin >> N;
x = N * 108;
if(x % 100 != 0) {
x = x / 100 + 1;
}
if(x > 206) {
cout << ":(" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
