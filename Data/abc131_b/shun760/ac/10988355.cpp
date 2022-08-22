#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef vector<int> VI;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
int n,l;
cin >> n >> l;
int sum=0;
rep(i,n){
sum+=l+i;
}
if(l>0) cout <<sum-l <<endl;
else if(l<=0 && 1<=l+n) cout << sum <<endl;
else if(l+n<1) cout << sum-l-n+1 << endl;
}
