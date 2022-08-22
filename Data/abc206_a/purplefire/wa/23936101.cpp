#include <bits/stdc++.h>
#define fo(i,n) for(int i = 0;i<n;i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
int modu(int x) {
if(x >= 0) {
return x;
} else {
return (x - 2 * x);
}
}
int main() {
int n;
cin >> n;
double x = 1.08 * n;
if(floor(x) < 206) {
cout << "yay!" << endl;
} else if(floor(x) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
