#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
if(n<100){
cout<<min(9,n)<<endl;
}else if(n<10000){
cout<<min(909,n-90)<<endl;
}else{
cout<<min(90909,n-9090)<<endl;
}
}
