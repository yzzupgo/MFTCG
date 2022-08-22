#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef int64_t i64;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl "\n"
int main() {
fast
ll n;
cin >> n;
ll nn = n * 1.08;
if(nn < 206) {
cout << "Yay!/n";
} else if(nn > 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
return 0;
}
