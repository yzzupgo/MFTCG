#include<iostream>
int digit(int n){ int c=0;
while(n!=0){ c++;n/=10;
} return c;
}
int main(){
int n,c=0; std::cin>>n;
for(int i=1;i<=n;i++)
if(digit(i)%2) c++;
std::cout<<c;
return 0;
}
