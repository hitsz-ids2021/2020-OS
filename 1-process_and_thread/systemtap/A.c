#include "csapp.h"

int main(int argc, char *argv[])
{
    pid_t child1 = (pid_t)atoi(argv[1]);
    printf("Process A start...\n");
    printf("A's pid: %d\n", getpid());
    getchar();
    Kill(child1, SIGKILL);
    exit(101);
}