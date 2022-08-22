#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repn(i,a,b) for (int i = a; i >=b ;i--)
#define MOD 1000000007
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
ll n;
cin >> n;
ll tm = n * 108 / 100;
if(tm < 206) {
cout << "Yay !\n";
} else if(tm == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
