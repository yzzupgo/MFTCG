#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B,sum;
cin >> A>>B;
if(A>=13){
sum=B;
}else if(A>=6 || A<=12){
sum = B/2;
}else{
sum=0;
}
cout << sum ;
}
