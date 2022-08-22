#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long long unsigned int ull;
typedef long double ld;
typedef vector<int> vr;
typedef pair<int, int> pr;
#define pb push_back
#define ff first
#define ss second
#define INF 1999999999
#define MODA 1000000007
#define PI 3.1415926535897932384626433
#define endl "\n"
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
double n;
cin >> n;
double c = (n * 1.08) / 100;
if(c < 206) {
cout << "Yay!" << endl;
} else if(c == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
