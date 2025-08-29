//This is the program to find larger between three numbers

#include <stdio.h>

int main() {
    
    int num1,num2,num3;
    
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    
    printf("Enter the number 3: ");
    scanf("%d",&num3);

    if (num1>num2){
        
        if(num1>num3){
            printf("Num1 is larger");
        }
        else{
            printf("Num3 is larger");
        }
        
    }
    else
    {
        if(num2>num3){
            printf("Num 2 is larger");
        }
        else{
            printf("Num 3 is larger");
        }
    }
    return 0;
}
