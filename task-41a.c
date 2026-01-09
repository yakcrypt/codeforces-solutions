#include <stdio.h>
#include <string.h>
#include <ctype.h>
enum {FIXED_NUM = 10000};

int
rev_check(char *seq, char *rev)
{
    int len_seq = strlen(seq), len_rev = strlen(rev);
    if (len_seq != len_rev) return 0;
    for (int i = 0; i < len_seq; ++i) {
        if (seq[i] != rev[len_seq - 1 - i]) {  
            return 0;
        }
    }
    return 1;
}

int
main(void)
{
    char seq[FIXED_NUM], rev[FIXED_NUM];
    scanf("%s\n%s", seq, rev); printf("%s\n", rev_check(seq, rev) ? "YES" : "NO");
    return 0;
}