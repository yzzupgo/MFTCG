#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define pb push_back
#define ALL(obj) (obj).begin(), (obj).end()
#define RALL(obj) (obj).rbegin(), (obj).rend()
#define print(obj) cout << obj << endl
#define scan(obj) cin >> obj
typedef long long ll;
using namespace std;
int main(void){
int n, l, MIN = 500, sum = 0;
cin >> n >> l;
for(int i = l; i < l + n; i++){
sum += i;
if(abs(MIN) > abs(i)) MIN = i;
}
print(sum - MIN);
}
