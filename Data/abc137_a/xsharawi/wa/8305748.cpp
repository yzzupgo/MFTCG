#include<bits/stdc++.h>
using namespace std;
int main(){
int q, w, z,a,d;
cin>>q>>w;
z=q+w;
a=q-w;
d=q*w;
if((q<=100&&q>=-100)&&(w<=100&&w>=-100)){
if(z>a&&z>d){cout<<z;}
else if(a>z&&a>d){cout<<a;}
else{cout<<d;}
}else{cout<<"not valid";}
return 0;
}
