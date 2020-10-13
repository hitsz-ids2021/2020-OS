void fork3()
{
    printf("L0\n");
    if (fork() != 0) {
        printf("L1\n");
        if (fork() != 0) {
            printf("L2\n");
	}
    }
    printf("Bye\n");
}

int main()
{
    fork3();
}
