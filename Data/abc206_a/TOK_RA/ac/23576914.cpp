#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const ll INF = 1e15;
template<class T>bool umin(T &a, T b) {
if(a > b) {
a = b;
return 1;
}
return 0;
}
template<class T>bool umax(T &a, T b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
int main() {
float n;
scanf("%f", &n);
if(floor(n * 1.08) == 206) {
puts("so-so");
} else if(floor(n * 1.08) < 206) {
puts("Yay!");
} else {
puts(":(");
}
return 0;
}
