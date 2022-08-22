#include<iostream>
#include<cmath>
using namespace std;
int main(){
int N;
cin >> N;
int ans;
int keta = log10(N)+1;
if(keta==1){
ans=N;
}else if(keta==2){
ans=9;
}else if(keta==3){
ans = 1+(N%100) + 100*((N/100)-1) +9;
}else if(keta==4){
ans = 9+100*9;
}else if(keta==5){
ans = 1+(N%10000) + 10000*((N/10000)-1) +9 +100*9;
}else if(keta==6){
ans = 9+100*9 + 10000*9;
}
cout << ans << endl;
}
