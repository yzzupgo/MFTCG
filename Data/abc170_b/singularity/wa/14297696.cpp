#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n); ++i)
#define INF 100000
#define MAX_V 100000
using namespace std;
using ll =long long;
using P = pair<int,int>;
string replaceAll(string &replacedStr, string from, string to) {
unsigned int pos = replacedStr.find(from);
int toLen = to.length();
if (from.empty()) {
return replacedStr;
}
while ((pos = replacedStr.find(from, pos)) != string::npos) {
replacedStr.replace(pos, from.length(), to);
pos += toLen;
}
return replacedStr;
}
int ctoi(const char c){
switch(c){
case '0': return 0;
case '1': return 1;
case '2': return 2;
case '3': return 3;
case '4': return 4;
case '5': return 5;
case '6': return 6;
case '7': return 7;
case '8': return 8;
case '9': return 9;
default : return -1;
}
}
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int gettt(long long int num){
int digit=0;
if(num<10){
digit=0;
}else{
while(num>1){
num /= 10;
digit++;
}
}
return digit;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int a,b;
cin>>a>>b;
bool l=false;
for(int i=0;i<=a;i++){
for(int j=a-i;j<=a;j++){
if(b==2*i+4*j)l=true;
}
}
if(l)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
