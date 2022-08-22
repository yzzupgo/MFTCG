#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B,sum;
cin >> A>>B;
if(A>=13){
sum=B;
}else if(A>5 && A<13){
sum = B/2;
}else{
sum=0;
}
cout << sum <<endl;
}
