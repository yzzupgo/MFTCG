#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B;
cin>>A>>B;
if(13 <= A){
cout<<B<<"\n";
} else if(6 <= A && A >= 12){
cout<<B/2<<"\n";
}else{
cout<<0<<"\n";
}
return 0;
}
