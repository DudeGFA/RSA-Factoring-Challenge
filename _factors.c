#include <stdio.h>
#include <stdlib.h>
int main(int argc __attribute__((unused)), char *argv[])
{
    unsigned long long int i, num;
    char str_num[52];
    int bufsize = 52;
    char *ptr;
    FILE *fp = fopen(argv[1], "r");
    while(fgets(str_num, bufsize, fp))
    {
        num = strtol(str_num, &ptr, 10);
        for(i = 2; i < num; i++)
        {
            if (num % i == 0)
                printf("%llu=%llu*%llu\n", num, i, num / i);
                break;
        }
    }
    return 0;
}