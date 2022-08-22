#include <bits/stdc++.h>
using namespace std;
int main(){
int a,ans;
cin >> a;
if(a<10){
ans=a;
}else if(a>=10 && a<100){
ans=9;
}else if(a>=100 && a<1000){
ans=a-90;
}else if(a>=1000 && a<10000){
ans=909;
}else if(a>=10000 && a<100000){
ans=a-9090;
}else{
ans=90909;
}
cout << ans << endl;
}
