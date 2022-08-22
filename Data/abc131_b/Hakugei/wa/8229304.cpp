#include<iostream>
using namespace std ;
int main()
{
int N,L ;
cin>>N>>L ;
int num_apple ;
if(L+N-1<0) num_apple=N-1 ;
else if(L>=0) num_apple=N-1 ;
else num_apple=0 ;
int sum=0 ;
for(int i=0;i<N;i++) if(i!=num_apple) sum+=L+i-1 ;
return 0 ;
}
