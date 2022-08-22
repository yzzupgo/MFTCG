#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
if(n<100){
cout<<min(9,n)<<endl;
}else if(n<10000){
cout<<min(909,n)<<endl;
}else if(n<100000){
cout<<909<<endl;
}else{
cout<<910<<endl;
}
}
