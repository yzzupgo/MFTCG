#include<iostream>
using namespace std;

int main(){
    int i,min1=0,ans=0;
    int taimu[5];
    for(i=0;i<5;i++){
        cin >> taimu[i];
    }
    for(i=0;i<5;i++){
        if(taimu[i]%10!=0 && taimu[i]%10<taimu[min1]){
            min1=i;
        }
    }
    for(i=0;i<5;i++){
        if(i==min1){
            continue;
        }
        if(taimu[i]%10!=0){
            taimu[i] += 10 - (taimu[i]%10);
        }
    }
    for(i=0;i<5;i++){
        ans +=taimu[i];
    }

    cout << ans;
    
}