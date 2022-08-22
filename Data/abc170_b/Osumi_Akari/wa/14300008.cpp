#include <bits/stdc++.h>
using namespace std;
int long long gcd(int long long a, int long long b){
return b?gcd(b,a%b):a;
}
int long long lcm(int long long a, int long long b){
return a/gcd(a,b)*b;
}
int long long GetDigit(int long long num){
int long long digit=0;
while(num!=0){
num /= 10;
digit++;
}
return digit;
}
int long long GetDigitN(int long long num, int long long N){
int long long digit=0;
while(num!=0){
num /= N;
digit++;
}
return digit;
}
int main(){
int a, b;
cin >> a >> b;
bool c = false;
for(int i = 0; i < a; i++){
if(2*i +4*(a-i) == b){
c = true;
break;
}
}
if(c == true){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
return 0;
}
