#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
cin>>n;
if(n < 10){
cout<<n<<endl;
}else if(n < 100){
cout<<9<<endl;
}else if(n < 1000){
cout<<n - 90<<endl;
}else if(n < 10000){
cout<<990<<endl;
}else if(n < 100000){
cout<<990 + n - 10000 + 1<<endl;
}else{
cout<<90909<<endl;
}
}
