#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int ans=0;
for(int i=0;i<=N;i++){
if(i>0&&i<10){
ans+=1;
}
else if(i>99&&i<1000){
ans+=1;
}
else if(i>9999&&i<100000){
ans+=1;
}
}
cout << ans << endl;
}
