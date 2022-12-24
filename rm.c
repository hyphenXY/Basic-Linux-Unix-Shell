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
            int g = 0;

            struct stat path_stat;
            stat(argv[i], &path_stat);
            if (S_ISREG(path_stat.st_mode))
            {
                g = 1;
            }
            else
            {
                printf("\"%s\" is not a file! (cannot remove)\n", argv[i]);
            }

            if (g == 1)
            {
                remove(argv[i]);
            }
        }
    }
    else if (strcmp(argv[1], "1") == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            int g = 0;

            struct stat path_stat;
            stat(argv[i], &path_stat);
            if (S_ISREG(path_stat.st_mode))
            {
                g = 1;
            }
            else
            {
                printf("\"%s\" is not a file! (cannot remove)\n", argv[i]);
            }

            if (g == 1)
            {
                printf("Do you want to remove the File \"%s\" (Y/n) :", argv[i]);
                char ifagree;
                scanf("%s", &ifagree);
                if (ifagree == 'Y')
                {
                    remove(argv[i]);
                }
            }
        }
    }
    else if (strcmp(argv[1], "2") == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            int g = 0;

            struct stat path_stat;
            stat(argv[i], &path_stat);
            if (S_ISREG(path_stat.st_mode))
            {
                g = 1;
            }
            else
            {
                printf("\"%s\" is not a file! (cannot remove)\n", argv[i]);
            }

            if (g == 1)
            {
                remove(argv[i]);
                printf("Removed \"%s\"\n", argv[i]);
            }
        }
    }
}