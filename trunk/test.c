/*
 * Generated by bloop.
 */
#include <stdio.h>

#define REMAINDER(a,b) ((a) % (b))

/*
 * End of prelude.
 */


int TWO_TO_THE_THREE_TO_THE(int N)
{
    int output = 0;
    int cell0 = 0;
    int cell1 = 0;
    cell0 = 1;
    {
        int ctr1;
        for (ctr1 = N; ctr1 > 0; ctr1--) 
            cell0 = (3 * cell0);
    }
    cell1 = 1;
    {
        int ctr2;
        for (ctr2 = cell0; ctr2 > 0; ctr2--) 
            cell1 = (2 * cell1);
    }
    output = cell1;
    return output;
}
int MINUS(int M, int N)
{
    int output = 0;
    if (M < N) 
        goto quit0;
    {
        int ctr1;
        for (ctr1 = (M + 1); ctr1 > 0; ctr1--) {
            if ((output + N) == M) 
                goto abort1;
            output = (output + 1);
        }
    }
    abort1:
    quit0:
    return output;
}
int PRIMEp(int N)
{
    int output = 0;
    int cell0 = 0;
    if (N == 0) 
        goto quit0;
    cell0 = 2;
    {
        int ctr1;
        for (ctr1 = (MINUS(N, 2)); ctr1 > 0; ctr1--) {
            if ((REMAINDER(N, cell0)) == 0) 
                goto quit0;
            cell0 = (cell0 + 1);
        }
    }
    output = 1;
    quit0:
    return output;
}
int GOLDBACHp(int N)
{
    int output = 0;
    int cell0 = 0;
    cell0 = 2;
    {
        int ctr1;
        for (ctr1 = N; ctr1 > 0; ctr1--) {
            if ((PRIMEp(cell0)) && (PRIMEp(MINUS(N, cell0)))) {
                output = 1;
                goto quit0;
            }
            cell0 = (cell0 + 1);
        }
    }
    quit0:
    return output;
}
int main()
{
    printf("%s\n", "TWO-TO-THE-THREE-TO-THE[1]");
    printf("%d\n", TWO_TO_THE_THREE_TO_THE(1));
    printf("%s\n", "TWO-TO-THE-THREE-TO-THE[2]");
    printf("%d\n", TWO_TO_THE_THREE_TO_THE(2));
    printf("%s\n", "TWO-TO-THE-THREE-TO-THE[3]");
    printf("%d\n", TWO_TO_THE_THREE_TO_THE(3));
    printf("%s\n", "MINUS[5,1]");
    printf("%d\n", MINUS(5, 1));
    printf("%s\n", "MINUS[43,1]");
    printf("%d\n", MINUS(43, 1));
    printf("%s\n", "MINUS[43,20]");
    printf("%d\n", MINUS(43, 20));
    printf("%s\n", "PRIME?[1]");
    printf("%d\n", PRIMEp(1));
    printf("%s\n", "PRIME?[2]");
    printf("%d\n", PRIMEp(2));
    printf("%s\n", "PRIME?[3]");
    printf("%d\n", PRIMEp(3));
    printf("%s\n", "PRIME?[5]");
    printf("%d\n", PRIMEp(5));
    printf("%s\n", "PRIME?[7]");
    printf("%d\n", PRIMEp(7));
    printf("%s\n", "PRIME?[101]");
    printf("%d\n", PRIMEp(101));
    printf("%s\n", "PRIME?[40]");
    printf("%d\n", PRIMEp(40));
    printf("%s\n", "PRIME?[20]");
    printf("%d\n", PRIMEp(20));
    printf("%s\n", "PRIME?[0]");
    printf("%d\n", PRIMEp(0));
    printf("%s\n", "PRIME?[30]");
    printf("%d\n", PRIMEp(30));
    printf("%s\n", "PRIME?[10]");
    printf("%d\n", PRIMEp(10));
    printf("%s\n", "GOLDBACH?[2]");
    printf("%d\n", GOLDBACHp(2));
    printf("%s\n", "GOLDBACH?[4]");
    printf("%d\n", GOLDBACHp(4));
    printf("%s\n", "GOLDBACH?[6]");
    printf("%d\n", GOLDBACHp(6));
    printf("%s\n", "GOLDBACH?[8]");
    printf("%d\n", GOLDBACHp(8));
    printf("%s\n", "GOLDBACH?[10]");
    printf("%d\n", GOLDBACHp(10));
    printf("%s\n", "GOLDBACH?[12]");
    printf("%d\n", GOLDBACHp(12));
    printf("%s\n", "GOLDBACH?[14]");
    printf("%d\n", GOLDBACHp(14));
    printf("%s\n", "GOLDBACH?[16]");
    printf("%d\n", GOLDBACHp(16));
    printf("%s\n", "GOLDBACH?[18]");
    printf("%d\n", GOLDBACHp(18));
    return 0;
}



