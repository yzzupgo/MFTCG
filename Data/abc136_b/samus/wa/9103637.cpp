#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
int getdigit(int N){
int digit = 0;
while (N>0) {
N/=10;
digit++;
}
return digit;
}
int main(){
int N;
cin >> N;
int ans = getdigit(N);
if (ans == 2) {
cout << 9 << endl;
}
if (ans == 4) {
cout << 899 << endl;
}
if (ans == 1) {
cout << N << endl;
}
if (ans == 3) {
cout << 9 + N - 99 << endl;
}
if (ans == 5) {
cout << 9 + 899 + N - 9999 << endl;
}
if (ans == 6) {
cout << 90909 << endl;
}
}
