#include<bits/stdc++.h>
#include<string>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long int
#define mod (ll)(1e10+7)
#define INF (ll)(1e5+10)
using namespace std;
int main() {
FIO;
ll n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!" << endl;
} else if(1.08 * n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
