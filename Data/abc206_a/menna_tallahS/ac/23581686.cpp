#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<unordered_map>
#define endl '\n';
#define sz(s) int(s.size())
#define all(v) ((v).begin()),((v).end())
#define allr(v) ((v).rbegin()), ((v).rend())
#define mem(x,y) memset(x,y,sizeof(x))
#define Ceil(x,y) ((x+y-1)/y)
#define PI acos(-1)
#define fix(x) fixed<<setprecision(x)
typedef long long ll;
typedef double dl;
using namespace std;
void Selim() {
std::ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
void Menna() {
dl n;
cin >> n;
n *= 1.08;
n = int(n);
if(n > 206) {
cout << ":(" << endl;
} else if(n < 206) {
cout << "Yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
int main() {
Selim();
int t = 1;
while(t--) {
Menna();
}
return 0;
}
