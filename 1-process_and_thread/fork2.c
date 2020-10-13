#include "csapp.h"

void fork2()
{
    printf("L0\n");
    fork();
    printf("L1\n");
    fork();
    printf("Bye\n");
}

int main()
{
    fork2();
}
