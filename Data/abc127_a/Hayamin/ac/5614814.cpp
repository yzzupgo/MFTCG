#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B,C;
cin>>A>>B;
if(13<=A) C=B;
else if(6<=A && A<=12) C=(B/2);
else if(A<=5) C=0;
cout<< C <<endl;
}
