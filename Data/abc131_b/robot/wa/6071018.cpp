#include<bits/stdc++.h>
using namespace std;
static const int MAX = 100*100;
int n,l;
int main(void){
cin >> n >> l;
int ary[n];
int ans = MAX;
for(int i=0;i<n;i++){
ary[i] = l+i;
}
int total;
total = abs(accumulate(ary,ary+n,0));
for(int i=0;i<n;i++){
ans = min(ans,total - (total-abs(ary[i])));
}
cout << total-ans << endl;
}
