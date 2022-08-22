#include <bits/stdc++.h>
using namespace std;
int a[10];
bool cmp(int a, int b) {
	return a%10 < b%10;
}
int main() {
  int n = 5;
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  sort(a, a+n,cmp);
  long long res = 0;
  for(int i=1;i<5;i++) {
  	res += (a[i] + ((a[i] %10 ==0) ? 0 : 10)); 
  }
  res += a[0];
  cout <<res;
  return 0;
}