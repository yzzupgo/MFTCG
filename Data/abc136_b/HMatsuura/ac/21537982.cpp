#include<bits/stdc++.h>
using namespace std;
int main(){
int N,ans = 0;
cin >> N;
for(int i = 1;i <= N;i ++){
if((i >= 1 && i < 10) || (i >= 100 && i < 1000) || (i >= 10000 && i < 100000)){
ans ++;
}
}
cout << ans << endl;
}
