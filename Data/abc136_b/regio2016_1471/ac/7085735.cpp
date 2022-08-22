#include<bits/stdc++.h>
using namespace std;
signed main(){
int a;
cin>>a;
if(a<10){
cout<<a<<"\n";
}else if(a>=10 && a<100){
cout<<"9\n";
}else if(a>=100 && a<1000){
cout<<a-90<<"\n";
}else if(a>=1000 && a<10000){
cout<<909<<"\n";
}else if(a>=10000 && a<100000){
cout<<a-9090<<"\n";
}else if(a==100000){
cout<<"90909\n";
}
}
