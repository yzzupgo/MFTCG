#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
if(n<10){
cout<<n<<endl;
}
else if(n<100){
cout<<9<<endl;
}
else if(n<1000){
cout<<9+n-99<<endl;
}
else if(n<10000){
cout<<909<<endl;
}
else if(n<100000){
cout<<909+n-9999<<endl;
}
else{
cout<<90909<<endl;
}
}
