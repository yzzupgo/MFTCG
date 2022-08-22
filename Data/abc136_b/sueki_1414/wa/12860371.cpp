#include <iostream>
int main()
{
int N;
std::cin>>N;
int result=0;
for(int i=1;i<=N;i++)
{
if(i%10%2==1)
{
result++;
}
}
std::cout<<result<<std::endl;
return 0;
}
