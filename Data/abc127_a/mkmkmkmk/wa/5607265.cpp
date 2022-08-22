#include <iostream>
using namespace std;
int main(void){
int N,M,L=0;
cin >> N >>M;
int C[M*2];
int D=0;
for(int i=1;i<=N;i++){
D=0;
for(int k=-1;k<2*M-1;k++){
k+=1;
cin >> C[k];
cin >> C[k+1];
if(i>=C[k]&&i<=C[k+1])
D+=1; else break;
if(D==M)L+=1;
}
}
cout <<L;
}
