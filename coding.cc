#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
// int main()
// {   
//     int input = 0;
//     printf("加入比特\n");
//     printf("你要好好学习吗(1/0)？");
//     scanf("%d", &input);
    
//     if (input==1)
//     {printf("好offer\n");
//     }
//     else {
//         printf("卖红薯\n");
//         }
    // return 0;
// }

// int main()
// {
//     printf("加入比特\n");
//     int line = 0;
//     while(line < 300)
//     {
//         printf("敲代码：%d\n",line);
//         line ++;
        
//     }
//     if(line==300)
//     {
//         printf("好offer");
//     }
    


//     return 0;
// }

// int main()
// {   
//     int a = 0;
//     printf("%d\n",~a);
//     return 0;
// }

// void test()
// {
//     int a = 1;
//     a++;
//     printf("%d",a);
// }

// int main ()
// {
//     int i = 0;
//     while (i<0)
//     {
//         test ();
//         i++;
//     }
//     return 0;
// }

// int main ()
// {
//     int a = 10;
//     int * pa = &a;
//     printf("%p\n", pa);
//     return 0;
// }

// int main ()
// {
//     char ch[10]="hello";
//     printf("%c\n",ch[9]);
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     if (a>b)
//     {
//         printf("%d\n",a);
//     }
//     else {
//         printf("%d\n",b);
//     }
//     return 0;
// }

// int max (int x, int y)
// {
//     if(x > y)
//         return x;
//     else
//         return y;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf ("%d %d", &a, &b);
//     int m = max(a,b);
//     printf("%d\n",m);
//     return 0;
// }

// int main ()
// {
//     char arr[]={'a','b','c'};
//     printf("%lu\n",strlen(arr));
//     return 0;
// }

// int main ()
// {
//     printf("     xx     \n");
//     printf("     xx     \n");
//     printf("xxxxxxxxxxxx\n");
//     printf("xxxxxxxxxxxx\n");

    
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     scanf("%d",&a);
//     if (a%5==0)
//     {printf("yes\n");}
//     else {printf("no\n");}
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     for (a=0 ; a<100 ; a++)
//        { if (a%2==1)
//             printf("%d\n",a);
//        }
//     return 0;
// }

// int main ()
// {
//     int day = 0;
//     scanf("%d",&day);
//     switch(day)
//     {
//         case 1:
//         printf("星期一\n");
//         break;
//         case 2:
//         printf("星期二\n");
//         break;
//     }


//     return 0;
// }

// int main ()
// {
//     int day = 0;
//     scanf("%d",&day);
//     switch(day)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//             printf("weekday");
//             break;
//         case 6:
//         case 7:
//             printf("weekend");
//             break;
//         default:
//             printf("wrong input, try again");
//             break;
//     }


//     return 0;
// }

int main ()
{
    int a = 0;
    while (a<=10)
    {
        a++;
        if(a==5)
        continue;
        printf("%d",a);
    }

    return 0;
}