#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin >> a >> b ;
int sum , min , pro ;
sum=a+b ;
min=a-b ;
pro=a*b ;
cout << max(max(sum,min),pro) ;
return 0 ;
}
