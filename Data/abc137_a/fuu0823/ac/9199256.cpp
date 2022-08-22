#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,tasu=0,hiku=0,kakeru=0,saidai;
cin>>a>>b;
tasu=a+b;
hiku=a-b;
kakeru=a*b;
saidai=max(max(tasu,hiku),kakeru);
cout<<saidai<<endl;
return 0;
}
