#include<bits/stdc++.h>
using namespace std;
int main(){
int q, w, z;
cin>>q>>w;
if((q<=100&&q>=-100)&&(w<=100&&w>=-100)){
if(q+w>q-w&&q+w>q*w){cout<<q+w;}
else if(q-w>q+w&&q-w>q*w){cout<<q-w;}
else{cout<<q*w;}
}else{cout<<"not valid";}
return 0;
}
