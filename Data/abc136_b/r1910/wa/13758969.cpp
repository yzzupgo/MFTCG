#include <bits/stdc++.h>
using namespace std;
int main(){
int n,ans=0,ten=10;
cin>>n;
for(;;){
if(n>=ten){
ans+=ten-1;
}
else if(n>=ten/10){
cout<<ans+n/(ten/10)*ten/10+n%(ten/10)+1<<endl;
break;
}
else{
cout<<ans<<endl;
break;
}
ten*=10;
}
return(0);
}
