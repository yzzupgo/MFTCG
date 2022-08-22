#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int tasu = a+b;
int hiku = a-b;
int kake = a*b;
int ary[] = {tasu,hiku,kake};
int max = -2332;
for (int i = 0; i < 3; i++)if(max<ary[i])max = ary[i];
cout<<max<<endl;
return 0;
}
