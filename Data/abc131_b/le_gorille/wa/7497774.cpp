#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
using namespace std;
int main(){
int N,L;
cin>> N >>L;
int S=0;
int m=max(L,-L);
int ind=1;
int l;
for(int i=1; i<=N; i++){
l= max(L+i-1, -(L+i-1));
if(l<=m){
ind =i;
}
S= S+ L+ i-1;
}
cout<< S - (L+ind-1) << endl;
}
