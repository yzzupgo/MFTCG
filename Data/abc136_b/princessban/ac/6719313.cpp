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
cout << n;
}else if(di == 10){
cout << 9;
}else if(di == 100){
cout << 9 + n + 1 - 100;
}else if(di == 1000){
cout << 909;
}else if(di == 10000){
cout << 909 + n + 1 - 10000;
}else if(di == 100000){
cout << 90909;
}
return 0;
}
