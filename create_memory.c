

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "smemlib.h"

int main()
{

    int res = smem_init(32768);
    printf("res is %d\n", res);

    printf("memory segment is removed from the system. System is clean now.\n");
    printf("you can no longer run processes to allocate memory using the library\n");

    return (0);
}
