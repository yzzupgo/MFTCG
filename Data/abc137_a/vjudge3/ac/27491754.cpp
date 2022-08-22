#include <bits/stdc++.h>
using namespace std;
int main()
{
int A,B, sum, differ,product;
cin>> A>>B;
sum=A+B;
differ=A-B;
product=A*B;
if(sum>product && sum> differ){
cout<< sum;
}
else if(product>sum && product>differ){
cout<< product;
}
else{
cout<<differ;
}
return 0;
}
