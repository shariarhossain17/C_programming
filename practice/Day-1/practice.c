// problem 1
// You need to print the lines given below in the same format as it is -

// “Recently I heard that you’ve achieved 95% marks in your exam.
// This is brilliant!
// I wish you’ll shine in your life!	Good luck with all the barriers(/\) in your life.”

// #include <stdio.h>

// int main(void)
// {
//     printf("Recently I heard that you’ve achieved 95% marks in your exam\n");
//     printf("This is brilliant!\n");
//     printf("I wish you’ll shine in your life!\tGood luck with all the barriers(/\\) in\n");
//     printf("your life");

//     return 0;
// }

// problem 2
// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float devide = a * 1.0 / b;
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%0.2f\n", devide);
    return 0;
}