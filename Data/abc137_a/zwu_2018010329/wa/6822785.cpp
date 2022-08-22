#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,max = 100000;
cin >> a >> b;
int jia,jian,cheng;
jia = a + b;
jian = a - b;
cheng = a * b;
printf("%d",jia>jian?(jia>cheng?jia:cheng):(jian>cheng?jian:jia));
}
