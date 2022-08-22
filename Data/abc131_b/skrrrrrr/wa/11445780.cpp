#include <iostream>
using namespace std;
int main (){
int N,L;
cin >>N >>L;
int count=0;
if(L<=0&&-1*L>N){
for(int i=0;i<N-1;i++){
count+=L;
L++;
}
}else if(L<=0&&-1*L<=N){
for(int i=0;i<N;i++){
count+=L;
L++;
}
}else{
for(int i=0;i<N-1;i++){
L++;
count+=L;
}
}
cout<<count<<endl;
return 0;
}
