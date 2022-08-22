#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B;
cin>>A>>B;
if(A >= 6){
if(A >= 13){
cout<<B<<"\n";
}
if(A <= 12){
cout<<B/2<<"\n";
}
}else{
cout<<0<<"\n";
}
return 0;
}
