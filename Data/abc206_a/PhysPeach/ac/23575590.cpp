#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define mcfor(i,L,R) for(ll i = ll(L); i < ll(R); i++)
#define mcford(i,L,R) for(ll i = ll(L-1); i >= ll(R); i--)
#define mcrep(i,N) for(ll i = 0; i < ll(N); i++)
#define mcrepd(i,N) for(ll i = ll(N-1); i >= 0; i--)
#define mcall(arr) arr.begin(), arr.end()
#define mcsize(arr) ll(arr.size())
#define INF32 2147483647
#define INF64 9223372036854775807
int main() {
int N;
cin >> N;
double price = 1.08 * (double)N;
if(price < 206) {
cout << "Yay!" << endl;
} else if(price < 207) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
