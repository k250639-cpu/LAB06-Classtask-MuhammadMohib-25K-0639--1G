#include <stdio.h>

int main() {
    int num, lastd = 0, temp = 0, firstd = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num < 10){
        printf("Only one digit so sum is%d\n", num);
    }else{
        lastd = num%10;
        temp = num;
        for(int i = temp; temp != 0;){
            temp = temp / 10;
            if(temp < 10 && temp>0){
                firstd = temp;
            }
        }
        printf("The sum of the first and last digit is %d", firstd + lastd);
    }
    return 0;
}
