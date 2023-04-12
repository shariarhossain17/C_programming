#include <stdio.h>
int main()
{
    int eye, mouth, body;
    scanf("%d %d %d", &eye, &mouth, &body);

    int min = 0;

    if (eye < mouth && eye < body)
    {
        min = eye;
    }

    else if (mouth < eye && mouth < body)
    {
        min = mouth;
    }

    else
    {
        min = body;
    }
    int murtiEye, murtiMouth, murtiBody, result;

    murtiEye = (eye - min) / 2;
    murtiMouth = mouth - min;
    murtiBody = body - min;

    result = min;

    if (murtiEye < murtiBody)
    {
        result += murtiEye;
    }
    else
    {
        result += murtiBody;
    }

    printf("%d", result);

    return 0;
}