#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B;
cin >>A>>B;
cout<<A<<" "<<B<<endl;
if(A>=13){
cout<<B<<endl;
}else if(A<=12&&A>=6){
cout<<B/2<<endl;
}else{
cout<<0<<endl;
}
return 0;
}
