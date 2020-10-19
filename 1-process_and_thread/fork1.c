#include "csapp.h"

/* $begin fork */
/* $begin wasidefork */
int main()
{
    pid_t pid;
    int x = 1;

    pid = Fork(); //line:ecf:forkreturn
    if (pid == 0)
    {                                  /* Child */
        printf("child : x=%d\n", ++x); //line:ecf:childprint
        //exit(0);
    }else{
        printf("not children: %d\n",pid);
    }

    /* Parent */
    printf("parent: x=%d\n", x-2); //line:ecf:parentprint
    exit(0);
}
/* $end fork */
/* $end wasidefork */
