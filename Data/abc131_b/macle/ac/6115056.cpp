#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
using ll = long long;
#define print(x) cout << x << endl
#define printf(x) cout << fixed << setprecision(9) << x << endl
#define yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define no cout << "No" << endl
#define NO cout << "NO" << endl
#define all(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
unsigned gcd(unsigned a, unsigned b) {
if(a < b) return gcd(b, a);
unsigned r;
while ((r=a%b)) {
a = b;
b = r;
}
return b;
}
int lcm(int number1,int number2){
return number1 * number2 / gcd(number1,number2);
}
int main(){
int N, L;
cin >> N >> L;
int eat = L;
int sum = 0;
for(int i = 0; i < N; i++){
int taste = i + L;
sum += taste;
if(abs(eat) > abs(taste)) eat = taste;
}
int ans = sum - eat;
cout << ans << endl;
}
