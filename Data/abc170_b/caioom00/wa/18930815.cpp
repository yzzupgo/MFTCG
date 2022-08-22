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
int b = (Y - 2*X)/2;
if (b >= 0 && b <= X) {
cout << "YES\n";
} else {
cout << "NO\n";
}
return 0;
}
