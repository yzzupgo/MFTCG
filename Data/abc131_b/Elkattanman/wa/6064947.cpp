#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define submitStage int TCF = 1 ;
#define testStage int TCF = 1000 ;
#define Start while(TCF--)
void FastInputOutput(){
ios_base :: sync_with_stdio( 0 ) ;
cin.tie( 0 ) ;
cout.tie( 0 ) ;
}
void ReadFromFile(){
freopen( "in.txt", "r" , stdin ) ;
}
int D(){
int t ;
scanf( "%d" , &t ) ;
return t ;
}
ll LLD(){
ll t ;
scanf( "%lld" , &t ) ;
return t ;
}
const int N=1e6+7;
void init(){
}
int main(){
submitStage Start{
int n=D(); int m=D();
int mn=N+N+N;
for(int i=m; i<n+m ; ++i){
if(mn> i || i==0){
mn=i;
}
}
int sum=0;
for(int i=m; i<n+m ; ++i){
if(i==mn) continue;
sum+=i;
}
printf("%d\n",sum);
}}
