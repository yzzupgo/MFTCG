#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
if(i/10==0||i/1000||i/100000){
sum++;
}
}
cout<<sum<<endl;
}
