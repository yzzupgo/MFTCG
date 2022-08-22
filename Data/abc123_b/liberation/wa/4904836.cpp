#include<stdio.h>
int main(){
    int dish[5];
    int fin_dish;
    int dish_num;
    int sum=0;
    int tmp=9;
    for(int i=0;i<5;i++){
        scanf("%d",&dish[i]);
        if((dish[i]%10)<=(tmp%10)&&0<(dish[i]%10)){
            tmp=dish[i];
            dish_num=i;
        }
    }
    printf("%d\n",tmp);
    fin_dish=tmp;
    for(int l=0;l<5;l++){
        if(l==dish_num){
            sum=sum+fin_dish;
        }else{
            if((dish[l]%10)==0){
                sum=sum+dish[l];
            }else{
                sum=sum+(dish[l]-(dish[l]%10)+10);
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}