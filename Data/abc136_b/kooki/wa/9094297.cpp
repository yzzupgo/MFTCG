#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
int n;
cin>>n;
int cnt=0;
for(int i=0;i<n;i++){
if(to_string(i).size()%2==1)cnt++;
}
cout<<cnt<<endl;
return 0;
}
