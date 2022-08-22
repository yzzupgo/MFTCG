#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
int turu=2,kame=4,sum=0;
string ans = "No";
cin >> x >> y;
for(int i = 0 ;i > 0;i++){
int j = x - i;
sum = turu * i + kame * j;
if(sum == y){
ans = "Yes";
}
}
cout << ans << endl;
}
