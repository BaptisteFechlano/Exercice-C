#include <stdio.h>

int main(void)
{
    int age = 375;
    int il_a_quinze_ans = -1;

    il_a_quinze_ans = (age == 15) ? 1 : 0;
    printf("Il a quinze ans = %d\n", il_a_quinze_ans);

    return 0;
}