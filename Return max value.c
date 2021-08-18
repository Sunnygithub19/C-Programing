#include <stdio.h>

int max(int num1, int num2, int num3, int num4);

int main()
{
    int a = 100;
    int b = 200;
    int c = 300;
    int d = 400;
    int ret;

    ret = max(a, b, c, d);

    printf("Max value is : %d\n", ret);

    return 0;
}

int max(int num1, int num2, int num3, int num4)
{
    int result;

    if (num1 > num2)

        result = num1;

    else
        result = num2;
    {

        if (num2 > num3)
            result = num2;
        else
            result = num3;
    }

    {

        if (num3 > num4)
            result = num3;
        else
            result = num4;
    }

    return result;
}
