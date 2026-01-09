#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum {FIXED_NUM = 1000};

void
swap_first_symbols(char *a, char *b)
{
    char temp[2]; temp[0] = a[0]; a[0] = b[0]; b[0] = temp[0];
}

int
main(void)
{
    int n; scanf("%d", &n);
    while (n--) {
        char first_string[FIXED_NUM], second_string[FIXED_NUM];
        scanf("%s%s", first_string, second_string);
        swap_first_symbols(first_string, second_string);
        printf("%s %s\n", first_string, second_string);
    }
    return 0;
}