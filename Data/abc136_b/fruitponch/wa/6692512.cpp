#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
int a,b,c;
cin>>a;
if(a<10){cout<<a;}
else if(a>9&&a<100){cout<<9;}
else if(a>99&&a<1000){cout<<a-90;}
else if(a>999&&a<10000){cout<<909;}
else cout<<910;
}
