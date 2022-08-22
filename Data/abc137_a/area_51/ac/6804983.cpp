#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<set>
#include<math.h>
#include<iomanip>
using namespace std;
int main(void)
{
int a,b;
cin>>a>>b;
int add=a+b, sub=a-b ,mul=a*b;
int max=add;
if(sub>max) max=sub;
if(mul>max) max=mul;
cout<<max<<endl;
}
