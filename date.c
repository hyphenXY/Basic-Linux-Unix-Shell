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
#include <sys/time.h>
#include <time.h>

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "0") == 0)
    {
        struct timeval tv;
        time_t t;
        struct tm *info;

        gettimeofday(&tv, NULL);
        t = tv.tv_sec;

        info = localtime(&t);

        printf("%s", asctime(info));
    }
    else if (strcmp(argv[1], "1") == 0)
    {
        struct timeval tv;
        time_t t;
        struct tm *info;

        gettimeofday(&tv, NULL);
        t = tv.tv_sec;

        info = gmtime(&t);

        printf("%s", asctime(info));
    }
    if (strcmp(argv[1], "2") == 0)
    {
        struct timeval tv;
        time_t t;
        struct tm *info;

        gettimeofday(&tv, NULL);
        t = tv.tv_sec;

        info = localtime(&t);

        char time1[999];
        strftime(time1, 999, "%a, %d %b %Y %H:%M:%S +0530", info);

        printf("%s\n", time1);
    }
}