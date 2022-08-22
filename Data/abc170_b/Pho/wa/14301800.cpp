#include <bits/stdc++.h>
using namespace std;
int main(){
int A;
int B;
cin>>A>>B;
string S="NO";
for(int i=0;i<A+1;i++){
if((12-2*A)==B){
S="YES";
break;
}
}
cout<<S<<endl;
}
