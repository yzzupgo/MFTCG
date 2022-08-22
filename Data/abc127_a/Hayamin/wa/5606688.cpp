#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B,C;
cin>>A>>B;
if(13<=A) C=B;
if(6<=A<=12) C=(B/2);
if(A<=5) C=0;
cout<< C <<endl;
}
