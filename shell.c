#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <dirent.h>
#include <pthread.h>

void ls_0()
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./ls";
        argv[1] = "0";

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void ls_1()
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./ls";
        argv[1] = "1";

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void ls_2()
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./ls";
        argv[1] = "2";

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void date_0()
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./date";
        argv[1] = "0";

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void date_1()
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./date";
        argv[1] = "1";

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void date_2()
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./date";
        argv[1] = "2";

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void mkdir_0(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./mkdir";
        argv[1] = "0";
        for (int k = 2; k < n + 1; k++)
        {
            argv[k] = command[k - 1];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void mkdir_1(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./mkdir";
        argv[1] = "1";
        for (int k = 2; k < n; k++)
        {
            argv[k] = command[k];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void mkdir_2(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./mkdir";
        argv[1] = "2";
        for (int k = 2; k < n; k++)
        {
            argv[k] = command[k];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void rm_0(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./rm";
        argv[1] = "0";
        for (int k = 2; k < n + 1; k++)
        {
            argv[k] = command[k - 1];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void rm_1(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./rm";
        argv[1] = "1";
        for (int k = 2; k < n; k++)
        {
            argv[k] = command[k];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void rm_2(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./rm";
        argv[1] = "2";
        for (int k = 2; k < n; k++)
        {
            argv[k] = command[k];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void cat_0(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./cat";
        argv[1] = "0";
        for (int k = 2; k < n + 1; k++)
        {
            argv[k] = command[k - 1];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void cat_1(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./cat";
        argv[1] = "1";
        for (int k = 2; k < n; k++)
        {
            argv[k] = command[k];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void cat_2(char *command[], int n)
{
    int t;
    t = fork();
    if (t == 0)
    {
        char *argv[999];
        argv[0] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./cat";
        argv[1] = "2";
        for (int k = 2; k < n; k++)
        {
            argv[k] = command[k];
        }

        execvp(argv[0], argv);
    }
    else
    {
        wait((int *)NULL);
    }
}

void *ls_0_t(void *arg)
{
    system("/home/shivam/Desktop/2020126_OS_Assignment_1/./ls 0");
}

void *ls_1_t(void *arg)
{
    system("/home/shivam/Desktop/2020126_OS_Assignment_1/./ls 1");
}

void *ls_2_t(void *arg)
{
    system("/home/shivam/Desktop/2020126_OS_Assignment_1/./ls 2");
}

void *date_0_t(void *arg)
{
    system("/home/shivam/Desktop/2020126_OS_Assignment_1/./date 0");
}

void *date_1_t(void *arg)
{
    system("/home/shivam/Desktop/2020126_OS_Assignment_1/./date 1");
}

void *date_2_t(void *arg)
{
    system("/home/shivam/Desktop/2020126_OS_Assignment_1/./date 2");
}

void *mkdir_0_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./mkdir 0 ";
    for (int l = 6; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 30] = ((char *)arg)[l];
        }
        else
        {
            c[l + 30] = 32;
        }
    }
    system(c);
}

void *mkdir_1_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./mkdir 1 ";
    for (int l = 9; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 27] = ((char *)arg)[l];
        }
        else
        {
            c[l + 27] = 32;
        }
    }
    system(c);
}

void *mkdir_2_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./mkdir 2 ";
    for (int l = 9; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 27] = ((char *)arg)[l];
        }
        else
        {
            c[l + 27] = 32;
        }
    }
    system(c);
}

void *rm_0_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./rm 0 ";
    for (int l = 3; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 30] = ((char *)arg)[l];
        }
        else
        {
            c[l + 30] = 32;
        }
    }
    system(c);
}

void *rm_1_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./rm 1 ";
    for (int l = 6; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 27] = ((char *)arg)[l];
        }
        else
        {
            c[l + 27] = 32;
        }
    }
    system(c);
}

void *rm_2_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./rm 2 ";
    for (int l = 6; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 27] = ((char *)arg)[l];
        }
        else
        {
            c[l + 27] = 32;
        }
    }
    system(c);
}

void *cat_0_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./cat 0 ";
    for (int l = 4; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 30] = ((char *)arg)[l];
        }
        else
        {
            c[l + 30] = 32;
        }
    }
    system(c);
}

void *cat_1_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./cat 1 ";
    for (int l = 7; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 27] = ((char *)arg)[l];
        }
        else
        {
            c[l + 27] = 32;
        }
    }
    system(c);
}

void *cat_2_t(void *arg)
{
    char c[9999] = "/home/shivam/Desktop/2020126_OS_Assignment_1/./cat 2 ";
    for (int l = 7; l < 999; l++)
    {
        if (((char *)arg)[l] == '&')
        {
            break;
        }

        if (((char *)arg)[l] != 0)
        {
            c[l + 27] = ((char *)arg)[l];
        }
        else
        {
            c[l + 27] = 32;
        }
    }
    system(c);
}

int main()
{
    while (1)
    {
        printf("\033[0;31m");
        printf("shell: ");
        printf("\033[0m");

        char input[999];
        scanf("%[^\n]%*c", input);

        char *command[999];
        int m = 0;
        int n = 0;

        char *p = strtok(input, " ");

        while (p)
        {
            command[m++] = p;
            p = strtok(NULL, " ");
            n++;
        }

        if (strcmp(input, "") == 0)
        {
            continue;
        }

        if (strcmp(command[0], "echo") == 0)
        {
            if (command[1] == NULL)
            {
                printf("\n");
            }
            else if (command[2] == NULL)
            {
                if (command[1][0] == '-')
                {
                    if (command[1][1] == 'n')
                    {
                        continue;
                    }
                    else if (command[1][1] == 'E')
                    {
                        printf("\n");
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    printf("%s\n", command[1]);
                }
            }
            else
            {
                if (command[1][0] == '-')
                {
                    if (command[1][1] == 'n')
                    {
                        printf("%s", command[2]);
                        for (int j = 3; j < n; j++)
                        {
                            printf(" %s", command[j]);
                        }
                    }
                    else if (command[1][1] == 'E')
                    {
                        for (int j = 2; j < n; j++)
                        {
                            printf("%s ", command[j]);
                        }
                        printf("\n");
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    for (int j = 1; j < n; j++)
                    {
                        printf("%s ", command[j]);
                    }
                    printf("\n");
                }
            }
        }
        else if (strcmp(command[0], "cd") == 0 && command[1] != NULL)
        {
            if ((strcmp(command[1], "~") == 0) && command[2] == NULL)
            {
                chdir(getenv("HOME"));
            }
            else if (strcmp(command[1], "..") == 0 && command[2] == NULL)
            {
                chdir("..");
            }
            else if (strcmp(command[1], "/") == 0 && command[2] == NULL)
            {
                chdir("/");
            }
            else
            {
                if (chdir(command[1]) != 0)
                {
                    perror("");
                }
            }
        }
        else if (strcmp(command[0], "cd") == 0 && command[1] == NULL)
        {
            chdir(getenv("HOME"));
        }
        else if (strcmp(command[0], "pwd") == 0 && command[1] != NULL)
        {
            if (strcmp(command[1], "-P") == 0 && command[2] == NULL)
            {
                char *path = realpath(".", NULL);
                printf("%s\n", path);
                free(path);
            }
            else if (strcmp(command[1], "-L") == 0 && command[2] == NULL)
            {
                char actualpath[PATH_MAX];
                char *path = realpath(".", actualpath);
                printf("%s\n", actualpath);
                free(path);
            }
            else
            {
                printf("INVALID OPTION!\n");
            }
        }
        else if (strcmp(command[0], "pwd") == 0 && command[1] == NULL)
        {
            char *path = realpath(".", NULL);
            printf("%s\n", path);
            free(path);
        }
        else if (strcmp(command[0], "ls") == 0)
        {
            if (command[1] == NULL)
            {
                ls_0();
            }
            else
            {
                if (command[2] == NULL)
                {
                    if (strcmp(command[1], "&t") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &ls_0_t, NULL);
                        pthread_join(p, NULL);
                    }
                    else if (strcmp(command[1], "-a") == 0)
                    {
                        ls_1();
                    }
                    else if (strcmp(command[1], "-1") == 0)
                    {
                        ls_2();
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    if (command[3] == NULL)
                    {
                        if (strcmp(command[2], "&t") == 0)
                        {
                            if (strcmp(command[1], "-a") == 0)
                            {
                                pthread_t p;
                                pthread_create(&p, NULL, &ls_1_t, NULL);
                                pthread_join(p, NULL);
                            }
                            else if (strcmp(command[1], "-1") == 0)
                            {
                                pthread_t p;
                                pthread_create(&p, NULL, &ls_2_t, NULL);
                                pthread_join(p, NULL);
                            }
                            else
                            {
                                printf("INVALID OPTION!\n");
                            }
                        }
                        else
                        {
                            printf("INVALID COMMAND! (Did you mean \"&t\")\n");
                        }
                    }
                    else
                    {
                        printf("INVALID COMMAND! (more options than required)\n");
                    }
                }
            }
        }
        else if (strcmp(command[0], "date") == 0)
        {
            if (command[1] == NULL)
            {
                date_0();
            }
            else
            {
                if (command[2] == NULL)
                {
                    if (strcmp(command[1], "&t") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &date_0_t, NULL);
                        pthread_join(p, NULL);
                    }
                    else if (strcmp(command[1], "-u") == 0)
                    {
                        date_1();
                    }
                    else if (strcmp(command[1], "-R") == 0)
                    {
                        date_2();
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    if (command[3] == NULL)
                    {
                        if (strcmp(command[2], "&t") == 0)
                        {
                            if (strcmp(command[1], "-u") == 0)
                            {
                                pthread_t p;
                                pthread_create(&p, NULL, &date_1_t, NULL);
                                pthread_join(p, NULL);
                            }
                            else if (strcmp(command[1], "-R") == 0)
                            {
                                pthread_t p;
                                pthread_create(&p, NULL, &date_2_t, NULL);
                                pthread_join(p, NULL);
                            }
                            else
                            {
                                printf("INVALID OPTION!\n");
                            }
                        }
                        else
                        {
                            printf("INVALID COMMAND! (Did you mean \"&t\")\n");
                        }
                    }
                    else
                    {
                        printf("INVALID COMMAND! (more options than required)\n");
                    }
                }
            }
        }
        else if (strcmp(command[0], "mkdir") == 0)
        {
            if (strcmp(command[n - 1], "&t") == 0)
            {
                if (command[1][0] == '-')
                {
                    if (strcmp(command[1], "-v") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &mkdir_1_t, (void *)input);
                        pthread_join(p, NULL);
                    }
                    else if (strcmp(command[1], "-m") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &mkdir_2_t, (void *)input);
                        pthread_join(p, NULL);
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    pthread_t p;
                    pthread_create(&p, NULL, &mkdir_0_t, (void *)input);
                    pthread_join(p, NULL);
                }
            }
            else
            {
                if (command[1][0] == '-')
                {
                    if (strcmp(command[1], "-v") == 0 && n > 2)
                    {
                        mkdir_1(command, n);
                    }
                    else if (strcmp(command[1], "-m") == 0 && n > 2)
                    {
                        mkdir_2(command, n);
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    mkdir_0(command, n);
                }
            }
        }
        else if (strcmp(command[0], "rm") == 0)
        {
            if (strcmp(command[n - 1], "&t") == 0)
            {
                if (command[1][0] == '-')
                {
                    if (strcmp(command[1], "-i") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &rm_1_t, (void *)input);
                        pthread_join(p, NULL);
                    }
                    else if (strcmp(command[1], "-v") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &rm_2_t, (void *)input);
                        pthread_join(p, NULL);
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    pthread_t p;
                    pthread_create(&p, NULL, &rm_0_t, (void *)input);
                    pthread_join(p, NULL);
                }
            }
            else
            {
                if (command[1][0] == '-')
                {
                    if (strcmp(command[1], "-i") == 0)
                    {
                        rm_1(command, n);
                    }
                    else if (strcmp(command[1], "-v") == 0)
                    {
                        rm_2(command, n);
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    rm_0(command, n);
                }
            }
        }
        else if (strcmp(command[0], "cat") == 0)
        {
            if (strcmp(command[n - 1], "&t") == 0)
            {
                if (command[1][0] == '-')
                {
                    if (strcmp(command[1], "-n") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &cat_1_t, (void *)input);
                        pthread_join(p, NULL);
                    }
                    else if (strcmp(command[1], "-E") == 0)
                    {
                        pthread_t p;
                        pthread_create(&p, NULL, &cat_2_t, (void *)input);
                        pthread_join(p, NULL);
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    pthread_t p;
                    pthread_create(&p, NULL, &cat_0_t, (void *)input);
                    pthread_join(p, NULL);
                }
            }
            else
            {
                if (command[1][0] == '-')
                {
                    if (strcmp(command[1], "-n") == 0)
                    {
                        cat_1(command, n);
                    }
                    else if (strcmp(command[1], "-E") == 0)
                    {
                        cat_2(command, n);
                    }
                    else
                    {
                        printf("INVALID OPTION!\n");
                    }
                }
                else
                {
                    cat_0(command, n);
                }
            }
        }
        else if (strcmp(command[0], "exit") == 0 && command[1] == NULL)
        {
            break;
        }
        else
        {
            printf("INVALID COMMAND!\n");
        }

        memset(input, 0x0, 999);
        memset(command, 0x0, 999);
        n = 0;
        m = 0;
    }
}