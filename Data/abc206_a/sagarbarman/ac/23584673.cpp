#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vc vector<char>
#define xag ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main() {
int n;
cin >> n;
double x = n * 1.08;
if(floor(x) < 206) {
cout << "Yay!";
} else if(floor(x) > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
