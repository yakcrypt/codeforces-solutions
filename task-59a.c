#include <stdio.h>
#include <ctype.h>
#include <string.h>
enum {FIXED = 1000};

int
count_regs(char *str, int len)
{
    int cnt_lowers, cnt_uppers;
    cnt_lowers = cnt_uppers = 0;
    for (int i = 0; i < len; ++i) if (str[i] == tolower(str[i])) cnt_lowers++;
    for (int j = 0; j < len; ++j) if (str[j] == toupper(str[j])) cnt_uppers++;
    return (cnt_lowers >= cnt_uppers) ? 1 : 0;
}

int 
main(void)
{
    char str[FIXED]; scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        if (count_regs(str, len)) {
            str[i] = tolower(str[i]);
        } else {
            str[i] = toupper(str[i]);
        }
    }
    printf("%s\n", str);
    return 0;
}
