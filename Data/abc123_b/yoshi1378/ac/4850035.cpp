#include<bits/stdc++.h>
using namespace std;
int main(){
    int Menu[5];
    int except=10;
    for(int i=0; i<5; i++){
        scanf("%d",&Menu[i]);
        if(except>Menu[i]%10 && Menu[i]%10!=0){
            except=Menu[i]%10;
        }
    }
    for(int i=0; i<5; i++){
        if(Menu[i]%10){
            Menu[i]=((Menu[i]/10)+1)*10;
        }
    }
    printf("%d",Menu[0]+Menu[1]+Menu[2]+Menu[3]+Menu[4]-10+except);
    return 0;
}