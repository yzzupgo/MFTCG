#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,t,p;
cin >> a >> b;
int jia,jian,cheng;
jia = a + b;
jian = a - b;
cheng = a * b;
t = max(jia,jian);
p = max(t,cheng);
cout << p;
}
