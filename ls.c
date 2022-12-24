#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <dirent.h>

int main(int argc, char **argv)
{
    if (strcmp(argv[1], "0") == 0)
    {
        struct dirent *xyz;

        DIR *dir = opendir(".");

        while ((xyz = readdir(dir)) != NULL)
        {
            if (xyz->d_name[0] != '.')
            {
                printf("%s ", xyz->d_name);
            }
        }
        closedir(dir);
        printf("\n");
    }
    else if (strcmp(argv[1], "1") == 0)
    {
        struct dirent *xyz;

        DIR *dir = opendir(".");

        if (dir != NULL)
        {
            for (xyz = readdir(dir); xyz != NULL; xyz = readdir(dir))
            {
                printf("%s ", xyz->d_name);
            }
        }
        closedir(dir);
        printf("\n");
    }
    else if (strcmp(argv[1], "2") == 0)
    {
        struct dirent *xyz;

        DIR *dir = opendir(".");

        while ((xyz = readdir(dir)) != NULL)
        {
            if (xyz->d_name[0] != '.')
            {
                printf("%s\n", xyz->d_name);
            }
        }
        closedir(dir);
    }
}