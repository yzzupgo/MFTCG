#include <bits/stdc++.h>
#include <numeric>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n,l,sum,b;
cin >> n >> l;
sum=n*(l-1)+(1/2)*n*(n+1);
vector<int> a(n);
for(int i=0;i<n;i++){
a[i]=l+(i+1)-1;
b=min(b,abs(a[i]));
}
cout << sum-b << endl;
}
