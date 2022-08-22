#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
int nijou;
int hozon=10000000000000;
int num=0;
int wa=0;
cin >> N >> L;
for(int i=1;i<=N;i++){
nijou = pow(L+i-1,2);
wa += L+i-1;
if(hozon>nijou){
hozon=nijou;
num=i;
}
}
cout << wa-(L+num-1);
}
