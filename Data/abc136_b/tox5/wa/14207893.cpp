#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
int main() {
int n;
cin>>n;
int waru;
int m=n;
while(m>=10){
waru++;
m /=10;
}
if(waru==0){
cout<<n<<endl;
}
else if(waru==1){
cout<<9<<endl;
}
else if(waru==2){
cout<<n-90<<endl;
}
else if(waru==3){
cout<<909<<endl;
}
else if(waru==4){
cout<<n-9180<<endl;
}
else if(waru==5){
cout<<90909<<endl;
}
}
