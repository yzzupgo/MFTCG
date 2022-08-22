#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main() {
int a,b,f;
int i,all,min,iftaste,iftaste2;
cin >> a;
cin >> b;
int taste[a];
min =10000;
all = 0;
for(i = 0;i < a;i++)
taste[i] = b + i;
for(i = 0;i < a;i++)
all = all + taste[i] ;
for(i =0; i < a -1 ;i++) {
iftaste = all - taste[i];
iftaste2 = all -taste[i+1];
if(abs(all - iftaste) <= abs(all - iftaste2))
if(abs(all-iftaste) <= abs(min))
min = iftaste;
}
cout << min <<endl;
}
