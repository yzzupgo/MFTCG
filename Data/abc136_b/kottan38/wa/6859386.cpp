#include <bits/stdc++.h>
using namespace std;
int main() {
string n;
cin>>n;
if(n.size()==1){
cout<<n.size()-1<<endl;
}
else if(n.size()==2){
cout<<"9"<<endl;
}
else if(n.size()==3){
cout<<n.size()-90<<endl;
}
else if(n.size()==4){
cout<<"909"<<endl;
}
else if(n.size()==5){
cout<<n.size()-9090<<endl;
}
else{
cout<<"90909"<<endl;
}
}
