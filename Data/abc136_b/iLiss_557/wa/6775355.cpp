#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int ans=0,ten=10;
while(N/ten){
ans+=ten*9/10;
ten=ten*100;
}
ten=ten/10;
if(N/ten){
ans=ans-ten+1;
}
cout << ans << endl;
return 0;
}
