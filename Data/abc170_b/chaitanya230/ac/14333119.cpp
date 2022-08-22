#include <iostream>
using namespace std;
int main() {
int n,x;
cin>>n>>x;
if(x>=2*n&&x<=4*n&&x%2==0){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}
