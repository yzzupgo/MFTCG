#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265359
int main(){
int A,B; cin>>A>>B;
if(A>13){
cout<<B;
}
else if(A<6){
cout<<0;
}
else{
cout<<B/2;
}
return 0;
}
