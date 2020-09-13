#include "stdio.h"

int main(void)
{
        /*int a;
        printf("Please input an integer value: ");
        scanf("%d", &a);
        printf("You entered: %d\n", a);

	    char C, B;
	    int x;
	    printf("What comes after G\n");
	    //scanf("%[^\n]%*c", &C);
	    scanf("%c", &C);

	    printf("What comes after O\n");
	    scanf(" %c", &B); //see the space
	    printf("What is your age?\n");
	    scanf("%d", &x);
	    printf("%c after G, %c after O and %d years old? Right?\n", C, B, x);
        */

	    int a, b;
        printf("Type two numbers:\n");
        scanf("%d%d", &a, &b);
        printf("The number are: %d %d\n", a, b);

        return 0;
}
