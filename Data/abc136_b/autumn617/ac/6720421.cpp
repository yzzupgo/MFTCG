#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,k,n) for(int i = (k); i < n;i++)
int main(){
int n;
cin >> n;
int temp = n / 10;
if(n % 10 == 0)temp++;
int count = 1;
while(temp != 0){
temp = temp / 10;
count++;
}
int ans = 0;
if(count % 2 != 0){
ans = n - pow(10,count-1) + 1;
count--;
}
rep(i,1,count+1){
if(i == 1)ans += 9;
else if(i % 2 != 0){
ans += pow(10,i-1) * 9;
}
}
cout << ans << endl;
}
