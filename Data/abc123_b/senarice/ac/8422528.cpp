#include<iostream>
using namespace std;
int main(){
    int a[6];
    int max;
    for(int i = 0; i<5; i++){
        cin>>a[i];
        if(i == 0){
         max = a[0];
        }
        if(a[i]%10!=0&&10-max%10<(a[i]/10+1)*10-a[i]){
            
            max = a[i];
        }
    }
    
    int sum = 0; 
    int count = 0;
    for(int i = 0; i<5; i++){
        if(a[i]%10!=0){
            
            count++;
            sum = sum+(10-a[i]%10);
        }
        sum = sum+a[i];
    }
    if(count==0){
        cout<<sum<<endl;
        return 0;
    }
   
    
    cout<<sum-(10-max%10)<<endl;
    return 0;
}