#include <stdio.h>

int main (void){
    int i,j,k,l,ans=0;
    int N; 
    int A[5];

    l=0;
    k=9;
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
        if(A[i]%10!=0 && 10-A[i]%10 > l){k=i;l=(10-A[i]%10);}
    }
    
    for(i=0;i<5;i++){
        j=0;
        while(A[i]>j){
            j = j+10;
        }
        ans += j;
    }

    if(k!=9){ans = ans - (10-A[k]%10);}

    printf("%d\n",ans);

    return 0;
}