#include"bits/stdc++.h"
using namespace std;
int main(){
int N;
cin >> N;
int ans=0;
for(int i=0 ; i < N ; i++){
if(i<10){ans++;}
if(i<100){continue;}
else if(i<1000){ans++;}
else if(i<10000){continue;}
else if(i<100000){ans++;}
else if(i<1000000){continue;}}
cout << ans ;
}
