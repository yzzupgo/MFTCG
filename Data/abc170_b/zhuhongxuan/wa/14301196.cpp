#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=1;i<=100;i++)
for(int j=1;j<=100;j++){
if(i*4+j*2==y&&i+j==x){puts("Yes");exit(0);}
}
puts("No");
return 0;
}
