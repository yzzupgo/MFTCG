#include <bits/stdc++.h>
using namespace std;
int main() {
cout << fixed << setprecision(15);
int a,b;
cin>>a>>b;
if(a+b>=a*b and a*b>=a-b){
cout<<a+b<<endl;
}else if(a*b>=a+b and a+b>=a-b){
cout<<a*b<<endl;
}else{
cout<<a-b<<endl;
}
}
