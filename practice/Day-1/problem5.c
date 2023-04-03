// Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

// Now, if you know the amount of money she has, can you tell which item/items she will buy?
// See the sample input and output for more clarification.

#include <stdio.h>

int main()
{

    int money;

    scanf("%d", &money);

    if (money >= 10000)
    {
        printf("Gucci Bag\n");

        if (money > 20000)
        {
            printf("Guci Belt");
        }
    }

    else if (money >= 5000)
    {
        printf("Levis Bag");
    }

    else
    {
        printf("something");
    }

    return 0;
}