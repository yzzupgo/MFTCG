#include <bits/stdc++.h>
using namespace std;
int main() {
int N,N_num,x;
x=1;
cin >> N;
int a=N;
while(a!=0){
a /= 10;
N_num++;
x=x*10;
}
int b=N;
int c;
int d;
if(N_num%2==1){
c=b*10/x;
d=b-x*c/10;
}else{
c=b*10/x;
d=b-x*c/10;
c=b*10/x;
d=b-x*c/10;
}
int ans;
int s=1;
cout << N_num <<endl;
for(int i=1;i<=N_num;i+=2){
if(i==N_num){
ans+=d+1;
}else{
ans+=9*s;
}
s=s*100;
}
cout << ans <<endl;
}
