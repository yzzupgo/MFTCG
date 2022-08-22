#include <bits/stdc++.h>
using namespace std;
int main(){
int A;
int B;
cin>>A>>B;
string S="No";
for(int i=0;i<A+1;i++){
if((4*A-2*i)==B){
S="Yes";
break;
}
}
cout<<S<<endl;
}
