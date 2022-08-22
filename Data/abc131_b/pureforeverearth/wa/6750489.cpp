#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l,ans;
cin >> n >> l;
for(int i=0; i<n; i++){
if(l>=0){
ans = (((l+1)+(l+n-1))*(n-1))/2;
}else if((l+n)>=1){
ans = ((l+(l+n-1))*(n-1))/2;
}else{
ans = ((l+(l+n-2))*(n-1))/2;
}
}
cout << ans << endl;
return 0;
}
