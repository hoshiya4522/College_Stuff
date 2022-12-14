// I hate this code
#include <stdio.h>
#include <conio.h>

int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);

    switch(a){
    case 1:
        printf("You have put 1");
        break;

    case 2:
        printf("You have put 2");
        break;

    case 3:
        printf("You have put 3");
        break;

    case 4:
        printf("You have put 4");
        break;

    case 5:
        printf("You have put 5");
        break;

    case 6:
        printf("You have put 6");
        break;

    case 7:
        printf("You have put 7");
        break;

    case 8:
        printf("You have put 8");
        break;

    case 9:
        printf("You have put 9");
        break;

    default:
        printf("That is a number.");
        break;

    }
    getch();
}


// does the same thing but a lot more optimised
//int main(){
//    int a;
//    
//    printf("Enter any number: ");
//    scanf("%d", &a);
//    
//    if (a>0 && a<10) printf("You have put %d", a);
//    else printf("That is a number.");
//    getch();
//}
