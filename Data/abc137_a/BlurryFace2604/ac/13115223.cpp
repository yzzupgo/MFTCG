#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B,sum,difference,product;
cin>>A>>B;
sum=A+B;
difference=A-B;
product=A*B;
if(sum>=product && sum>=difference)cout<<sum;
else if(difference>=sum && difference>=product)cout<<difference;
else cout<<product;
}
