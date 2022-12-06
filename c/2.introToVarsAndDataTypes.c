#include <stdio.h>
int main(){
    int a; // here a is a variable which can only store an integer as c is a strictly typed language.
    a = 0; // as a was defined as a variable earlier it can now store data
    int b = 5; // variables can also be defined and data can be stored at the same time

    printf("B contains the number b\n"); // this wont print "B contains the number 5" rather this would return "B contains the number b" literally.
    //To print the value of b we will have to write '%d' as a place holder for the value of b.
	printf("B contains the number %d\n", b);
	//NOTE: \n stand for a new line if \n was not written at the end the output would be "B contains the number bB contains the number 5"

	/*
        %d is a placeholder for an integer, a double and a float.
	*/
	return 0;
}
