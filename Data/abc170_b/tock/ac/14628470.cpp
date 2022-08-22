#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14159265359;
class Hoge{
public:
long int i0;
int i1,N0;
int iX,iY;
string s0;
int* iarray0;
Hoge(int);
void func0();
void array0();
void printarray0();
~Hoge();
private:
int ianswer;
void search0();
void inputarray(int*,int);
void inputarray2(int*,int*,int);
void printarray(int*,int);
};
Hoge::Hoge(int itemp){
i0=itemp;
}
void Hoge::func0(){
cin>>iX>>iY;
int itotal0=0;
bool judge=0;
for(int b=0;b<26;b++){
itotal0=2*(iX-b)+4*b;
if(((itotal0==iY)&&((iX-b)>=0))){
judge=1;
}
}
if(judge){
cout<<"Yes"<<endl;
}
else{cout<<"No"<<endl;}
}
void Hoge::search0(){
for (int i0=0;i0<N0;i0++){
if(iarray0[i0]==0){
ianswer=i0+1;
}
}
cout<<ianswer<<endl;
}
void Hoge::array0(){
cout<<"N0?";
cin>>N0;
for (int i0=0;i0<N0;i0++){
cout<<"i0="<<i0<<endl;
cin>>iarray0[i0];
}
}
void Hoge::inputarray(int* itemp,int itempn){
int* iarray=itemp;
int n0=itempn;
for (int i0=0;i0<n0;i0++){
cin>>iarray[i0];
}
}
void Hoge::inputarray2(int* itemp,int* itemp2,int itempn){
int* iarray=itemp;
int* iarray2=itemp2;
int n0=itempn;
for (int i0=0;i0<n0;i0++){
cout<<"i0="<<i0<<endl;
cin>>iarray[i0];
cin>>iarray2[i0];
}
}
void Hoge::printarray(int* itemp,int itempn){
int* iarray=itemp;
int n0=itempn;
for (int i0=0;i0<n0;i0++){
cout<<"iarray["<<i0<<"]="<<iarray[i0]<<endl;
}
}
void Hoge::printarray0(){
for (int i0=0;i0<N0;i0++){
cout<<"iarray0["<<i0<<"]="<<iarray0[i0]<<endl;
}
}
Hoge::~Hoge(){
}
int main(){
int N;
Hoge* hoge=new Hoge(N);
hoge->func0();
return 0;
}
