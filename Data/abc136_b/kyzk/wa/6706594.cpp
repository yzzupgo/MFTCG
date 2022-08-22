#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
string n;cin >> n;
int cnt = 0;
if(n.size() >= 2){
cnt += 9;
if (n.size() >= 4 ){
cnt += 900;
if(n.size() == 6){
cnt += 90000;
}else if(n.size() == 5){
cnt += stoi(n) % 1000;
cnt++;
}
}else if (n.size() == 3){
cnt += stoi(n)%100;
cnt ++;
}
}else{
cnt += stoi(n)%10;
}
cout << cnt << endl;
}
