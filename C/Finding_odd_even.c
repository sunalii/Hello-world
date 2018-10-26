#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Input an integer number: ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0:
            printf("%d is an EVEN number\n",num);
            break;
        case 1:
            printf("%d is an ODD number\n",num);
            break;
    }

    printf("\n*\n**\n***\n****\n*****\n******\n*******\n");
    printf("Hello world!\n");
    printf("*******\n******\n*****\n****\n***\n**\n*\n");
    return 0;
}
