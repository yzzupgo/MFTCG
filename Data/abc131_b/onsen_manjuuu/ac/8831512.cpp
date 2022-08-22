#include<bits/stdc++.h>
int main()
{
int n,l;
std::cin>>n>>l;
int max = 10000000,res;
for(int i=0;i<n;i++){
int cur = i + l;
if(max>std::abs(0-cur)){
res = cur - 0;
max = std::abs(0-cur);
}
}
int sum = l*n + (0 + (n-1)) * n / 2;
std::cout<<sum-res<<std::endl;
}
