#include <stdio.h>
#include <conio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a>=0) printf("Inputted number is positive");
    else printf("Inputted number is negative");

    getch();
}
