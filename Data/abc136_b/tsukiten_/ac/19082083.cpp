#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
int n,count;
count=0;
cin >> n;
count += max(min(n,9) - 0 , 0);
count += max(min(n,999) - 100 + 1, 0);
count += max(min(n,99999) - 10000+ 1, 0);
cout << count << "\n";
}
