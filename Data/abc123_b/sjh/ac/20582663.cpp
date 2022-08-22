#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int total = 0;
    int d = 10;
    for (int i=0; i<5; i++){
        cin>>arr[i];
        int x = arr[i]/10;
        int y = arr[i]%10;
        if (y==0) total+=arr[i];
        if (y>0) total+= x*10+10;
        if (y>0 and y<d) d=y;
    }
    cout << total-10+d<<endl;
    
}
