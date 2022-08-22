#include <bits/stdc++.h>
#include <numeric>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n,l,sum=0;
cin >> n >> l;
vector<int> a(n),b(n);
for(int i=0;i<n;i++){
a[i]=l+(i+1)-1;
sum+=a[i];
b[i]=abs(a[i]);
}
sort(a.begin(),a.end());
if(l>0){
cout << sum-a[0] << endl;
}else if(l+n-1>=0&&l<=0){
cout << sum << endl;
}else if(l+n-1<0){
cout << sum-(l+n-1) << endl;
}
}
