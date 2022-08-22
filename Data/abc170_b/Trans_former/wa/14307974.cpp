#include<bits/stdc++.h>
using namespace std;
#define l1 long long
int main(){ int x,y,f=0; cin>>x>>y;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if((2*i+4*j)==y && (i+j==x)){f=1;cout<<"YES";break;
}
} if(f==1)break;
} if(f==0)cout<<"NO";
}
