#include "csapp.h"

int mysystem(char *command)
{
    int status;
    char *argv[4];
    char *a0 = "sh";
    char *a1 = "-c";
    if( fork()==0 ) /*子进程*/
    { 
        argv[0] = a0;
        argv[1] = a1;
        argv[2] = command;
        argv[3] = NULL;
        execve("/bin/sh", argv, environ);
        return -1; //执行异常
    }
    else{ /*父进程*/
        if( wait(&status) > 0)
        {
            if(WIFEXITED(status) != 0)
                return WEXITSTATUS(status);
            else return status;
        }
        else return -1; //wait异常
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: mysystem <command>\n");
        return -1;
    }    
    return mysystem(argv[1]);
}
