#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
int a,b,c,d,e,f;
cin >> a;
b=(a-9),c=(a-99),d=(a-999),e=(a-9999),f=(a-99999);
{
if(b<0){
b=0;
}
}
{
if(c<0){
c=0;
}
}
{
if(d<0){
d=0;
}
}
{
if(e<0){
e=0;
}
}
{
if(f<0){
f =0;
}
}
cout <<a-b+c-d+e-f<<endl;
}
