#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <dirent.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "0") == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            mkdir(argv[i], 0777);
        }
    }
    if (strcmp(argv[1], "1") == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            mkdir(argv[i], 0777);
            printf("Created Directory -> \"%s\"\n", argv[i]);
        }
    }
    if (strcmp(argv[1], "2") == 0)
    {
        for (int i = 3; i < argc; i++)
        {
            mkdir(argv[i], (mode_t)(argv[2]));
        }
    }
}