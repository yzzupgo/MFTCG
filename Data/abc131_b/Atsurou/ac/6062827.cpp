#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
int N,L;
cin >> N >> L;
int ans =0;
int eaten=1000;
int eaten_i;
for(int i=0;i<N;i++){
ans += L+i;
if(eaten>abs(L+i)){
eaten = abs(L+i);
eaten_i=i;
}
}
cout << ans - (L + eaten_i) << endl;
return 0;
}
