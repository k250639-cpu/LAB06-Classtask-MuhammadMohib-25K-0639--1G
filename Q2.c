#include <stdio.h>

int main() {
    int multi = 0,count = 0, num1, num2, option, divi= 0;
    printf("Enter number (1 : Multiplication)(2 : Division): \n");
    scanf("%d", &option);
    if(option == 1){
    printf("Enter number 1: \n");
    scanf("%d", &num1);
    printf("Enter number 2: \n");
    scanf("%d", &num2);
    for(int i; i<num2;i++){
        multi += num1;
    }
    printf("The multiplied answer of %d and %d is %d", num1, num2, multi);
    } else if( option == 2){
        printf("Enter number 1(Numerator): \n");
        scanf("%d", &num1);
        printf("Enter number 2(Denominator): \n");
        scanf("%d", &num2);
        if(num2 == 0){
            printf("Error, it will show infinity");
        }
        divi = num1;
        while(divi > 0 && num2 > 0){
            divi -= num2;
            count += 1;
    }
    if(num2 > 0){
        printf("The dividend answer of %d and %d is %d", num1, num2, count);
    }
    return 0;
    }
}
