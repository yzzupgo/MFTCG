#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
if(N==100000){
cout<<90909<<endl;
}
else if(N<=99999&&N>=10000){
cout<<909+N-9999<<endl;
}
else if(N>=1000&&N<=9999){
cout<<909<<endl;
}
else if(N>=100&&N<=999){
cout<<9+N-99<<endl;
}
else if(N>=10&&N<99){
cout<<9<<endl;
}
else{
cout<<N<<endl;
}
}
