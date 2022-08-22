#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin>>N;
if(1<=N && N<=9){
cout<<N<<endl;
}
else if(10<=N && N<=99){
cout<<9<<endl;
}
else if(100<=N && N<=9999){
cout<<(N-99)+9<<endl;
}
else if(1000<=N && N<=9999){
cout<<909<<endl;
}
else if(10000<=N && N<=99999){
cout<<(N-9999)+909<<endl;
}
else if(N==100000){
cout<<90909<<endl;
}
return 0;
}
