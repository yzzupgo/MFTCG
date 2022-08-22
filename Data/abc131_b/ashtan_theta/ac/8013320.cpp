#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const long long INF = 1LL<<60;
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
void strInit(char str[]);
void extIntStr(char str[],int data[]);
void incsort(int data[],int len);
void decsort(int data[],int len);
void printIntArray(int data[],int len);
int* inputArray(int n);
int* cpyArray(int data[],int len);
int judgePrime(int x);
int printPrime(int n);
void soinsubunkai(int a,int* indexes,int **prim,int **e);
int main(){
int N,L;
cin >> N >> L;
int sum = N * (L+N+L-1) / 2;
int min=N+1000;
if(L>0){
min=L;
}else{
for(int i=0;i<N;i++){
if(abs(L+i)<min){
min=abs(L+i);
}
}
}
int prt;
if(sum>0)prt = sum - min;
else prt = sum + min;
printf("%d",prt);
}
int judgePrime(int x) {
for (int i = 2; i < x - 1; i++) {
if (x%i == 0)return 0;
}
return 1;
}
int printPrime(int n) {
int i = 1;
for (int j = 0; j < n + 1; j++) {
while (1) {
if (judgePrime(++i))break;
}
}
return i;
}
void soinsubunkai(int a,int* indexes,int **prim,int **e){
if(a==1){
int *t = (int*)malloc(sizeof(int));
int *b = (int*)malloc(sizeof(int));
*t = 1;
*b = 1;
*indexes = 1;
*prim = t;
*e = b;
return;
}
int n = a;
std::vector<int> pr,er;
int index,prm,j,rec;
index=rec=0;
for(int i=0;n!=1;i++){
prm = printPrime(i);
if(n % prm==0){
pr.push_back(prm);
er.push_back(0);
while((n % prm)==0){
n /= prm;
er[index]++;
j++;
}
index++;
}
}
int len = pr.size();
int* ret = (int*)malloc(sizeof(int) * len);
int* re = (int*)malloc(sizeof(int)*len);
for(int i=0;i<len;i++){
ret[i]=pr[i];
re[i]=er[i];
}
*indexes = len;
*prim = ret;
*e = re;
return;
}
void strInit(char str[]){
int len=strlen(str);
for(int i=0;i<len;i++){
str[i]=0;
}
}
void extIntStr(char str[],int data[]){
int length=strlen(str);
str[length-1]=' ';
char buff[12];
int j,index;
index=j=0;
for(int i=0;i<length;i++){
if(str[i]!=' '){
buff[j++]=str[i];
}else{
data[index++]=atoi(buff);
strInit(buff);
j=0;
}
}
}
void incsort(int data[],int len){
for(int i=0;i<len-1;i++){
for(int j=i+1;j<len;j++){
if(data[i]>data[j]){
int tmp=data[i];
data[i]=data[j];
data[j]=tmp;
}
}
}
}
void decsort(int data[],int len){
for(int i=0;i<len-1;i++){
for(int j=i+1;j<len;j++){
if(data[i]<data[j]){
int tmp=data[i];
data[i]=data[j];
data[j]=tmp;
}
}
}
}
void printIntArray(int data[],int len){
for(int i=0;i<len;i++){
printf("%d\n",data[i]);
}
}
int* inputArray(int n){
int *data;
data=(int*)malloc(sizeof(int)*n);
char *get;
get=(char*)malloc(sizeof(char)*11*n+1);
fgets(get,11*n+1,stdin);
extIntStr(get,data);
free(get);
return data;
}
int* cpyArray(int data[],int len){
int *cp;
cp=(int*)malloc(sizeof(int)*len);
for(int i=0;i<len;i++){
cp[i]=data[i];
}
return cp;
}
