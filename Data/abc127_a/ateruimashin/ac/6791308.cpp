#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
int a,b;
cin>>a>>b;
if(a>=13){
cout<<b<<endl;
}else if(a>=6&&a<13){
cout<<b/2<<endl;
}else{
cout<<'0'<<endl;
}
return 0;
}
