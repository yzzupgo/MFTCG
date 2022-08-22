#include<iostream>
using namespace std ;
int main()
{
int N,L ;
cin>>N>>L ;
int num_apple ;
if(L+N-1<0) num_apple=L+N-1 ;
else if(L>=0) num_apple=L ;
else num_apple=0 ;
int sum=0 ;
for(int i=L;i<=L-1+N;i++) if(i!=num_apple) sum+=i ;
cout<<sum<<endl ;
return 0 ;
}
