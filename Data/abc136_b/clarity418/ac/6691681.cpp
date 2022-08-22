#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<utility>
#include<string>
#include<utility>
#include<iomanip>
#include<bitset>
#include<math.h>
using namespace std;
int main(){
int n;
cin >> n;
long long ans = 0;
if(n == 100000){
ans = 90909;
}else if(n>=10000){
ans += 909;
ans += n-10000+1;
}else if(n>=1000){
ans = 909;
}
else if(n>=100){
ans += 9;
ans += n-100+1;
}else if(n >= 10){
ans = 9;
}else{
ans = n;
}
cout << ans << endl;
}
