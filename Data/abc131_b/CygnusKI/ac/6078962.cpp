#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L,a,b=0,c=0;
cin >> N >> L;
for(int i=1;i<=N;i++){
a=L+i-1;
if(i==1){
c=a;
}
else if(a<b && b>=0 && a>=0){
c=a;
}
else if(a>b && b<=0 && a<=0){
c=a;
}
b=a;
}
cout << N*L-N+N*(N+1)/2-c << endl;
}
