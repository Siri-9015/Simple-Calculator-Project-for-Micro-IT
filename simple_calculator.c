#include <stdio.h>
    #include <math.h>
    void main()
    {
        int a,b,c;
        char ch;
        scanf("%d%c%d",&a,&ch,&b);
        switch(ch)
        {
            case'%': c=a%b;
            printf("%d",c);
            break;
            case'/': c=a/b;
            printf("%d",c);
            break;
            case'*': c=a*b;
            printf("%d",c);
            break;
            case'+': c=a+b;
            printf("%d",c);
            break;
            case'-': c=a-b;
            printf("%d",c);
            break;
            default: printf("Invalid operation");
            break;
        }
    }