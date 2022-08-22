#include<bits/stdc++.h>
#include<map>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main() {
fast;
ll n;
cin >> n;
if(ceil(n * 1.08) > 206) {
cout << ": (" << endl;
} else if(ceil(n * 1.08) < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
