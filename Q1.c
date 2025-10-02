#include <stdio.h>

int main() {
    int num;
    printf("Enter number to reverse output: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("Error, no value was entered so sum and average can't be displayed");
    }
    for(int i = num; i >=1; i--){
        printf("%d\n", num);
        num -= 1;
    }
    return 0;
}
