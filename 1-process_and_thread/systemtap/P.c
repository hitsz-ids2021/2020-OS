#include "csapp.h"

void itoa(int num, char *result) {
    int str_len = -1;

    for (int i = 0; num != 0; i++) {
        int this_digit = (int)((long)num % 10);
        num /= 10;
        str_len = i + 1;
        result[i] = '0' + this_digit;
    }
    result[str_len] = '\0';

    for (int i = 0; i < str_len / 2; i++) {
        char temp = result[i];
        result[i] = result[str_len - i - 1];
        result[str_len - i - 1] = temp;
    }
}

int main(int argc, char *argv[])
{
    pid_t child1, child2;
    printf("Process P start...\n");

    if ((child1=Fork()) == 0) {
        char *argv[] = {"./B", NULL};
		Execve("./B", argv, NULL);
    	exit(101);
    }
    if ((child2=Fork()) == 0) {
        char child1_str[8] = {'\0'};
        itoa(child1, child1_str);
        char *argv[] = {"./A", child1_str, NULL};
        Execve("./A", argv, NULL);
    	exit(102);
    }
    Waitpid(child1, NULL, 0);
    printf("Bye\n");

    return 0;
}