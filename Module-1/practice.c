#include <stdio.h>

int main()
{
    int num = 1;
    float f_num = 1.4;
    char text = "S";
    printf("%d %0.2f %c", num, f_num, text);

    int userInput;
    float userInput_f;
    char user_text;

    scanf("%d %f %c",&userInput,&userInput_f,&user_text);
    printf("%d %0.2f %c", userInput,userInput_f,user_text);


    int a,b ;
    char p;
    scanf("%d%c %d%c",&a,&p,&b,&p);
    printf("%d%% %d%%",a,b);

    int a,b;
    scanf("%d%% %d%%",&a,&b);
    printf("%d%% %d%%",a,b);

    long long num = 1000000000000;
    printf("%lld",num);

    double float_num = 100.334343344;

    printf("%0.9lf",float_num);

    return 0;
}