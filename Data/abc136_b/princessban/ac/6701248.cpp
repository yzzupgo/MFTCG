#include <iostream>
#include <cstdio>
using namespace std;
long long n, di, ans;
int main()
{
cin >> n;
for(long long i = 10; ; i *= 10){
if(n % i == n){
di = i / 10;
break;
}
}
if(di == 1){
for(long long i = 1; i <= n; i++){
ans++;
}
cout << ans;
}else if(di == 10){
cout << 9;
}else if(di == 100){
for(long long i = 100; i <= n; i++){
ans++;
}
cout << 9 + ans;
}else if(di == 1000){
cout << 909;
}else if(di == 10000){
for(int i = 10000; i <= n; i++){
ans++;
}
cout << 909 + ans;
}else if(di == 100000){
cout << 90909;
}
return 0;
}
