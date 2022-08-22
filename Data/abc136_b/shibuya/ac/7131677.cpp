#include"bits/stdc++.h"
using namespace std;
int main(){
int N;
cin >> N;
int ans=0;
for(int i=1 ; i < N+1 ; i++){
if(i<1){continue;}
else if(i<10){ans++;}
else if(i<100){continue;}
else if(i<1000){ans++;}
else if(i<10000){continue;}
else if(i<100000){ans++;}
else if(i<1000000){continue;}}
cout << ans ;
}
