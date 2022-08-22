#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin >> n >>l;
vector<int>a(n);
int sum=0;
int min_a=100000;
int min_b=0;
for(int i=0; i<n; i++){
a[i]=l+(i+1)-1;
sum+=a[i];
}
for (int i=0;i<n;i++) {
if(abs(a[i])<min_a){
min_b=a[i];
min_a=abs(a[i]);
}
}
cout <<sum-min_b <<endl;
}
