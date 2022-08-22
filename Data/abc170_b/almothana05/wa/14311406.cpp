#include <iostream>
#define s true
using namespace std;
int abs(int i,int j){
int f=i-j;
if(f<0){
i*=-1;
}
return f;
}
int main(){
int a,b;
cin>>a>>b;
int c=a*2;
a*=4;
if(b%2==0&&a>b&&c<b){
cout<<"Yes";
}
else cout<<"No";
return 0;
}
