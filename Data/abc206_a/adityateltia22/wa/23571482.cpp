#include<bits/stdc++.h>
using namespace std;
#define aditya ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define endl "\n"
#define int long long
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
#define all(a) a.begin(),a.end()
#define MAXN 10000005
#define BLOCK 555
#define pii pair<int,int>
int32_t main() {
aditya
int n;
cin >> n;
double num = (double)n * 1.08;
int x = num;
if(x < 206) {
cout << "Yay";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
