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
            struct stat path_stat;
            stat(argv[i], &path_stat);
            if (S_ISREG(path_stat.st_mode) == 0)
            {
                printf("not a file: is a directory\n");
                continue;
            }

            FILE *f;

            f = fopen(argv[i], "r");

            char filedata[999];

            if (f == NULL)
            {
                printf("File Does Not Exist!");
            }
            else
            {
                while (fgets(filedata, 999, f) != NULL)
                {
                    printf("%s", filedata);
                }
            }

            fclose(f);
        }
    }
    if (strcmp(argv[1], "1") == 0)
    {
        int j = 1;
        for (int i = 2; i < argc; i++)
        {
            struct stat path_stat;
            stat(argv[i], &path_stat);
            if (S_ISREG(path_stat.st_mode) == 0)
            {
                printf("not a file: is a directory\n");
                continue;
            }

            FILE *f;

            f = fopen(argv[i], "r");

            char filedata[99999];

            if (f == NULL)
            {
                printf("File Does Not Exist!");
            }
            else
            {
                while (fgets(filedata, 999, f) != NULL)
                {
                    printf("%d. %s", j, filedata);
                    j++;
                }
            }

            fclose(f);
        }
    }
    if (strcmp(argv[1], "2") == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            struct stat path_stat;
            stat(argv[i], &path_stat);
            if (S_ISREG(path_stat.st_mode) == 0)
            {
                printf("not a file: is a directory\n");
                continue;
            }

            FILE *f;

            f = fopen(argv[i], "r");

            char filedata[999];

            if (f == NULL)
            {
                printf("File Does Not Exist!");
            }
            else
            {
                char c = fgetc(f);
                while (c != EOF)
                {
                    if (c == '\n')
                    {
                        printf("$");
                    }
                    printf("%c", c);
                    c = fgetc(f);
                }
                fclose(f);
            }
        }
    }
}