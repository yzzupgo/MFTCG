#include <iostream>
using namespace std;
int main() {
int a;
int b;
cin>>b;
cin>>a;
if(a%2!=0){
cout<<"No"<<endl;
}
else if(a<=b*4&&a>=b*2){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
