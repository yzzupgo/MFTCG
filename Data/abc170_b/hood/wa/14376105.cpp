#include <bits/stdc++.h>
using namespace std;
int main() {
int t,k,X,Y,j;
cin>>X>>Y;
k=X;
for(int i=0;i<X+1;i++){
if(4*(k-2*i)==Y){
j=1;
}
}
if(j==0){
cout<<"No"<<endl;
}
else{
cout<<"Yes"<<endl;
}
}
