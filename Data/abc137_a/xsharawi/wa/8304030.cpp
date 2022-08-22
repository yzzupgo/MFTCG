#include<bits/stdc++.h>
using namespace std;
int main(){
int q, w, z;
cin>>q>>w;
if(q+w>q-w&&q+w>q*w){cout<<q+w;}
else if(q-w>q+w&&q-w>q*w){cout<<q-w;}
else{cout<<q*w;}
return 0;
}
