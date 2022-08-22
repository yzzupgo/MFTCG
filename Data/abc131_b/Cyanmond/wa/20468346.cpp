#include<bits/stdc++.h>
int main(){
int N,L;std::cin>>N>>L;
int sum=0,min=1<<20;
for(int i=0;i<N;i++){
sum+=L+i;
min=std::min(min,abs(L+i));
}
std::cout<<sum-min<<std::endl;
}
