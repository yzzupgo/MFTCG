#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
int main() {
int a;cin >> a;
int ans = 0;
for(int i=1;i<=a;i++){
if(i < 10){
ans++;
}else if(i >= 100 && i < 1000){
ans++;
}else if(i >= 10000 && i < 100000){
ans++;
}
}
cout << ans << endl;
return 0;
}
