#include<bits/stdc++.h>
using namespace std;
#define int long long
#define test int x; cin>>x; while(x--)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f(i,a,b) for(int i = a; i < b; i++)
#define fe(i,a,b) for(int i = a; i <= b; i++)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define SZ(a) int((a).size())
int32_t main() {
int n;
cin >> n;
n = n * 1.08;
int x = 206;
if(n == x) {
cout << "so-so";
} else if(n < x) {
cout << "Yay!";
} else {
cout << ":(";
}
}
