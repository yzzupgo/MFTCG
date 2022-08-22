#include <bits/stdc++.h>
using namespace std;
int main (){
int N;
cin>>N;
int keta=1;
int TempN=N;
while(TempN>9){
TempN/=10;
keta ++;
}
int sum =0;
for(double i=0; i<(keta)/2; i ++){
sum +=9*pow(10, i*2);
}
if(keta%2==1){
sum+=N-pow(10, keta-1)+1;
}
cout<<sum<<endl;
}
