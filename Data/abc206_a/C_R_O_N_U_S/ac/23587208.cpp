#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0 ; i < int(n);i++)
#define FOR(i,s,n) for(int i = s ; i < int(n);i++)
#define all(x) x.begin(),x.end()
using namespace std ;
typedef long long ll;
typedef pair<int, int > P;
typedef vector <int> V ;
typedef vector <string> si;
int main() {
ios::sync_with_stdio(NULL);
cin.tie(0);
int n ;
cin >> n ;
int ans = n * 1.08;
if(ans > 206) {
cout << ":(";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << "Yay!" << endl;
}
return 0 ;
}
