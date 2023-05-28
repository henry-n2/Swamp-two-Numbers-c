#include <stdio.h>
#include<stdlib.h>
int main(){
    int var1, var2,choice,var3;
    printf("Number swap tool--@henry-n2\n");
    printf("If you want to swamp number press\n[1]FOR WITHOUT USING 3rd variable\n[2]WITH 3rd Varriable\n[3]PRINT SWAPED NUMBER ONLY **Don't update the variable**\n[4]exit\n==>");
    scanf("%d" , &choice);
    if(choice==4){
        exit(0);
    }
    printf("Enter 1st Number\n==>");
    scanf("%d" , &var1);
    printf("Enter Number 2\n==>");
    scanf("%d" , &var2);
    if(choice==1){
    var1=var1-var2;
    var2=var1+var2;
    var1=var2-var1;
    printf("Number 1 is %d and Number 2 is %d" , var1 , var2);
    } else if(choice==2){
        var1==var3;
        var1=var2;
        var2==var3;
        printf("Number 1 is %d and Number 2 is %d " , var1 , var2);
    }else if(choice==3){
        printf("Number 1 is %d and Number 2 is %d" , var2 , var1);
    } else{
        printf("Invalid Choice\n closing......");
        exit(0);
    }
    

}