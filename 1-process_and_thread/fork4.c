#include "csapp.h"

void fork4()
{
    printf("L0\n");
    if (Fork() == 0) {
        printf("L1\n");
        if (Fork() == 0) {
            printf("L2\n");
        }
    }
    printf("Bye\n");
}

int main()
{
    fork4();
}
