#include<bits/stdc++.h>
using namespace std;
static const int MAX = 100*100;
int n,l;
int main(void){
cin >> n >> l;
int ary[n];
int diff = MAX;
for(int i=0;i<n;i++){
ary[i] = l+(i+1)-1;
}
int total;
total = abs(accumulate(ary,ary+n,0));
for(int i=0;i<n;i++){
diff = min(diff,abs(total - (total-abs(ary[i]))));
}
int ans;
total = accumulate(ary,ary+n,0);
if(total < 0) ans = total+diff;
else ans = total-diff;
cout << ans << endl;
}
