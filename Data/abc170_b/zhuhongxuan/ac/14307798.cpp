#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++){
int j=x-i;
if(i*4+j*2==y){
puts("Yes");
exit(0);
}
}
puts("No");
return 0;
}
