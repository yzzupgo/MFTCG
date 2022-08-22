#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a.begin(),a.end())
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define rep2(i,s,n) for (int i = s; i < (int)(n); ++i)
#define ret return
int main() {
double N;
cin >> N;
if((int)(N * 1.08) < 206) {
cout << "Yay!" << endl;
} else if((int)(N * 1.08) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
