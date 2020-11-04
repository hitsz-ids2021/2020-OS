#include "csapp.h"

void fork2()
{
    printf("L0\n");
    Fork();
    printf("L1\n");
    Fork();
    printf("Bye\n");
}

int main()
{
    fork2();
}
