#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
int main() {
int A, B;
cin >> A >> B;
int price;
if (A > 13) {
price = B;
} else if (A <= 5) {
price = 0;
} else {
price = B / 2;
}
cout << price;
return 0;
}
