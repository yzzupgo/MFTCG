#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define rep(i,n) for(int i = 0; i , (n); ++i)
using ll = long long;
using namespace std;
int sum(int n) {
if (n == 0) {
return 0;
}
int s = sum(n - 1);
return (s + n);
}
int kaizyou(ll k) {
ll sum = 1;
for (int i = 1; i <= k; ++i)
{
sum *= i;
}
return sum;
}
long long zyo(int i){
int sum = 1, cou = 0;
while (cou < i) {
sum *= 5;
cou++;
}
return sum;
}
int main() {
int a, b;
cin >> a >> b;
if ((a * 2) <= b && b % 2 == 0&&(a*4)>=b) {
cout<<"Yes";
}
else {
cout << "No";
}
}
