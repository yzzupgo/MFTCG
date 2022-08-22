#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
if(n>=10000&&n!=100000){
cout<<n-9999+909<<endl;
}else if(n>=1000&&n<10000){
cout<<899<<endl;
}else if(n>=100&&n<=999){
cout<<n-99+9<<endl;
}else if(n>=10&&n<100){
cout<<9<<endl;
}else if(n>=1&&n<10){
cout<<n<<endl;
}else if(n==100000){
cout<<90909<<endl;
}
}
