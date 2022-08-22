#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,max=0,last,time=0;
    vector<int> food(5);
    for(i=0;i<5;i++){
        cin>>food[i];
        if(food[i]%10==0){

        }else if(max<10-(food[i]%10)){
            max=10-(food[i]%10);
            last=i;
        }
    }
    for(i=0;i<5;i++){
        if(i==last){
            time+=food[i];
        }else if(food[i]%10==0){
            time+=food[i];
        }else{
            time+=food[i];
            time+=10-(food[i]%10);
        }
    }
    cout<<time<<endl;
    cout<<last<<endl;
    return(0);
}    
