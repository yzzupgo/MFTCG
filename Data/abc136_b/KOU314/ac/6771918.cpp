#include<bits/stdc++.h>
using namespace std;
int getdigit(int num){
int digit = 0;
while(num!=0){
num/=10;
digit++;
}
return digit;
}
int main(void){
int n;
cin >> n;
int ans=0;
for(int i=1;i<=n;i++){
if(getdigit(i)%2==1){
ans++;
}
}
cout << ans << endl;
return 0;
}
