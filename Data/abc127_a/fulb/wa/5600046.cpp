#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
int N,M;
cin>>N>>M;
if(N)printf("%d\n",M);
else if(N>5&&N<13)printf("%d\n",M/2);
else printf("0\n");
return 0;
}
