#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int Digit_num(int n){
int digit = 0;
while(n>0){
digit++;
n/=10;
}
return digit;
}
int main(){
int n;
cin >> n;
int count = 0;
for(int i=1;i<=n;i++){
if(Digit_num(i)%1 == 0){
count++;
}
}
cout << count << endl;
}
