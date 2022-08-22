#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
int turu=2,kame=4,sum1=0,sum2=0;
string ans = "No";
cin >> x >> y;
for(int i = 0 ;i <= x;i++){
int j = x - i;
sum1 = turu * i + kame * j;
sum2 = turu * j + kame * i;
cout << sum1 << "," << sum2 << endl;
if(sum1 == y || sum2 == y){
ans = "Yes";
}
sum1 = sum2 = 0;
}
cout << ans << endl;
}
