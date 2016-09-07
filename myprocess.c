#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("A running process!\n");
    printf("PID: %d\n", getpid());

    return 0;
}
