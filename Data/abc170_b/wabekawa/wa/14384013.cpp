#include <iostream>
using namespace std;
int main(void){
int x,y;
cin>>x>>y;
if(x%2==1){
cout<< "No" <<endl;
}
else if(x*4<y){
cout<< "No" <<endl;
}
else{
cout<< "Yes" <<endl;
}
}
