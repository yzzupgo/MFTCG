#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define fo(i,a,b,x) for(int i=a; i<b; i+=x)
#define foe(i,a,b,x) for(int i=a; i<=b; i+=x)
#define rfo(i,a,b,x) for(int i=a; i>b; i-=x)
#define rfoe(i,a,b,x) for(int i=a; i>=b; i-=x)
#define pb push_back
#define endl '\n'
#define fileio freopen("in.txt", "r", stdin);freopen("out.txt", "w", stdout)
const int mod = 1000000007;
int main() {
fastio;
float n;
cin >> n;
float x = 1.08 * n;
int y = x;
if(y < 206) {
cout << "Yay!";
} else if(y == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
