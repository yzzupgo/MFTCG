#include<bits/stdc++.h>
using namespace std;
int main(){
int A, B;
cin>> A >> B;
if ( A>0 && B >0 || A<0 && B <0){
if( A == 1 || B ==1)
cout << A+B;
else
cout << A*B;
}
else{
if( A < 0 && B > 0)
cout << A + B;
else
cout << A - B;
}
return 0;
}
