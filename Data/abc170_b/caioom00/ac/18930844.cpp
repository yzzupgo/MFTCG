#include <iostream>
using namespace std;
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int X, Y;
cin >> X >> Y;
int T = (Y - 2*X)/2;
int C = X - T;
if (T + C == X && 2*C + 4*T == Y && T >= 0 && C >= 0) {
cout << "Yes\n";
} else {
cout << "No\n";
}
return 0;
}
