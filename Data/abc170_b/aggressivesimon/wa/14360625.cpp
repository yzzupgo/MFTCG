#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;
typedef list<int> LISTINT;
int main() {
LISTINT listOne;
LISTINT::iterator i;
int n,x;
int in;
int cnt=0;
while(cin>>in){
if (cnt == 0) {
n = in;
} else if (cnt == 1) {
x = in;
} else {
listOne.push_front (in);
}
cnt++;
}
int relsut;
bool flg = false;
int k = 1;
while(!flg) {
bool smallFlg = false;
bool bigFlg = false;
for (i = listOne.begin(); i != listOne.end(); ++i) {
if (n-k == *i && n-k>0) {
smallFlg=true;
}
if (n+k ==*i && n+k<=100) {
bigFlg=true;
}
}
if (!smallFlg) {
relsut=n-k;
flg=true;
break;
}
if (!bigFlg){
relsut=n+k;
flg=true;
}
k++;
}
cout<<relsut<<endl;
}
