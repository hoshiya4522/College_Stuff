#include <stdio.h>

int main(){
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);

    if(y%400==0||y%100!=0&&y%4==0){
        printf("The year is a leap year\n");
    }
    else{
        printf("The year isn't a leap year\n");
    }
}
