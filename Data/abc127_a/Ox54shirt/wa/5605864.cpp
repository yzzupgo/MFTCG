#include<bits/stdc++.h>
using namespace std;
int main(){
int A,B,y;
cin>>A>>B;
if(A<=5)
y=0;
else if(A<=13)
y=B/2;
else
y=B;
cout<<y<<endl;
}
