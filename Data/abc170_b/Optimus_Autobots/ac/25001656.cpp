#include <bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int y;
cin>>y;
int i;
for(int i=0; i<=x; i++){
if(((4*i)+(2*(x-i)))==y){
cout<<"Yes";
return 0;
}
}
cout<<"No";
return 0;
}
