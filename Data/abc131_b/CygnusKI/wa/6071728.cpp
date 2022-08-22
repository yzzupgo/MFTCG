#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L,a,b,c=0;
cin >> N >> L;
for(int i=1;i<=N;i++){
a=L+i-1;
if(a<b&&a>=0){
c=a;
}
else if(a>b&&a<0){
c=a;
}
b=a;
}
cout << N*L-N+N*(N+1)/2-c << endl;
}
