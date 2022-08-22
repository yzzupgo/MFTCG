#include <iostream>
#include <cmath>
int main()
{
int N;
std::cin>>N;
int result=0;
for(int i=1;i<=N;i++)
{
if(static_cast<int>(std::log10(i)+1)%2==1)
{
result++;
}
}
std::cout<<result<<std::endl;
return 0;
}
