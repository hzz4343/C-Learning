#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


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

// int main ()
// {
//     int a = 0;
//     while (a<=10)
//     {
//         a++;
//         if(a==5)
//         continue;
//         printf("%d",a);
//     }

//     return 0;
// }

// int main()
// {
//     char password[20]={0};
//     printf("请输入密码:>");
//     scanf("%s", password);
//     printf("请确认密码(Y/N):>");
//     int tmp = 0;
//     while ((tmp = getchar())!='\n')
//     {
//         ;   
//     }
//     int ch = getchar();
//     if (ch == 'Y')
//     {
//         printf("确认成功\n");

//     }


//     return 0;
// }

// int main()
// {
//     int a = 1;
//     do 
//        { printf("%d\n",a);
//         a++;
//        }
//     while(a < 11);
//     return 0;
// }

// int main()
// {
//     int sum = 1;
//     int a = 1;
//     int n = 1;
//     int fsum = 0;
//     for(n=1;n<=10;n++,a=1,sum=1)
//     {
//     do 
//     {sum = sum * a;
//     a++;}
//     while (a<=n);
//     fsum +=sum;
//     }
//     printf("%d\n",fsum);
//     return 0;
// }

// int main()
// {
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     int sum = 0;
    
//     for(n=1;n<=10;n++){
//         ret*=n;
//         sum+=ret;
//     }

//     printf("%d\n",sum);
//     return 0;
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int left = 0;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int right = sz-1;
    
//     while(left<=right){
        
//     int mid = (left+right)/2;
//     if (arr[mid]<k)
// {
//     left = mid +1;
// }
//     else if(arr[mid]>k) 
//     {
//         right = mid-1;
//     }
//     else if(arr[mid]==k)
//     {
//         printf("找到了，是%d\n",mid);
//         break;
//     }
//     }
//     if (left > right)
//     {
//         printf("找不到了");
//     }
//     return 0;
// }

// int main()
// {
//     char arr1[]="welcome to bit!!!!!";
//     char arr2[]="xxxxxxxxxxxxxxxxxxx";
//     int left = 0;
//     int right = strlen(arr1)-1;

//     while (left <= right)
//     {
//         arr2[left]=arr1[left];
//         arr2[right]=arr1[right];
//         sleep(1000);
//         system("cls");
//         left++;
//         right--;
//         printf("%s\n",arr2);


//     }

//     return 0;
// }


// int main()
// {
//     char password[20]={0};
//     int i = 0;
//     for(i=0;i<3;i++)
//     {
//         printf("请输入密码:");
//         scanf("%s",password);
//         if(strcmp(password,"123456")==0)
//         {
//             printf("登陆成功\n");
//             break;
//         }
//         else 
//         {
//             printf("密码错误，重新输入：");
//         }
//     }
//     if (i==3)
//     {
//         printf("已连续输入错误3次");
//     }



//     return 0;
// }

// void menu(){
//     printf("******************\n");
//     printf("*****1.play ******\n");
//     printf("*****0.exist******\n");
//     printf("******************\n");
// }

// void game(){
//     srand((unsigned int)time(NULL));
//     int ret = rand()%100+1;
//     int guess = 0;
//     while (1)
//     {
//         printf("请猜数字");
//         scanf("%d",&guess);
//         if (guess < ret)
//         {
//             printf("猜小了\n");
//         }
//         else if (guess > ret)
//         {
//             printf("猜大了\n");
//         }
//         else if (guess == ret)
//         {
//             printf("猜对了\n");
//             break;
//         }

//     }



// }
// int main()
// {
//     int input = 0;
//     do 
//     {
//         menu();
//         printf("请选择:>");
//         scanf("%d",&input);
//         switch(input)
//         {
//             case 1:
//             game();
//             break;
//             case 0:
//             printf("退出游戏\n");
//             break;
//             default:
//             printf("输入错误");
//             break;
        
//         }
     



//     }while(input);
    


//     return 0;
//     }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     printf("请输入三个数字");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a < b)
//     {
//         int tmp = a;
//         a = b;
//         b = tmp;
//     }
//     if (a < c)
//     {
//         int tmp = a;
//         a = c;
//         c = tmp;
//     }
//     if (b < c)
//     {
//         int tmp = b;
//         b = c;
//         c = tmp;
//     }
//     printf("%d %d %d\n",a,b,c);
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     for(i=0;i<=100;i++)
//     {
//         if(i%3==0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int i = 0;
//     int m = 0;
//     printf("请输入两个数");
//     scanf("%d %d",&a,&b);
//     if(a<b)
//     {
//         for(i=1;i<=a;i++)
//         {
//             if(a%i==0 && b%i==0)
//             {m=i;
            
//             }
//         }
//     }
//     if (a>b)
//     {
//         for(i=1;i<=b;i++)
//         {
//         if(a%i==0 && b%i==0)
//          {m=i;
//         }}
//     }
    


//     printf("最大公约数是：%d\n",m);
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     int a = 1;
//     int count = 0;
//     for(i=100;i<=200;i++)
//     {
//         for(a=2;a<i;a++)
//         {
//             if(i%a==0)
//             {
//                 break;
//             }
//         }
//         if (i==a)
//         {
//             printf("%d\n",i);
//         }
        
//         }
    

//     return 0;
// }

// int main()
// {
//     char arr1[20]={0};
//     char arr2[]="hello bit";
//     strcpy(arr1,arr2);
//     printf("%s\n",arr1);
//     return 0;
// }

// int main()
// {
//     char arr1[]="hello bit";
//     memset(arr1,'z',5);
//     printf("%s\n",arr1);

//     return 0;
// }

// int main()
// {
//     int a = 0;
//     int b = 2;
//     a = b ;
//     printf("%d %d",a,b);

//     return 0;
// }

// int get_max(int x, int y)
// {
//     int z = 0;
//     if(x>y)
//     {
//         z = x;
//     }
//     else
//     {
//         z = y;
//     }
//     return z;

// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int max = get_max(a,b);
//     printf("max = %d\n",max);



//     return 0;
// }

// void exchange(int *pa, int *pb)
// {
//     int z = 0;
//     z = *pa;
//     *pa = *pb;
//     *pb = z;
// }

// int main()
// {
//     int a = 5;
//     int b = 6;
//     exchange(&a,&b);
//     printf("a=%d,b=%d\n",a,b);

//     return 0;
// }


// int is_prime(int x)
// {
//     int y = 2;
//     for(y=2;y<x;y++)
//     {if (x%y==0)
//     {return 0;}
//     }
//     return 1;
// }

// int main()
// {
//     int i = 0;
//     for(i=100;i<=200;i++)
//     {
//         if(is_prime(i)==1)//判断是不是素数
//         {
//             printf("%d\n",i);
//         }

//     }

//     return 0;
// }

// int is_leap_year(int x)
// {
//     if (x%400==0 || ((x%100!=0) && (x % 4 ==0)))
//     return 1;
//     else
//     return 0;
// }

// int main()
// {
//     int y = 0;
//     for (y=1000;y<=2000;y++)
//     {
//         if (is_leap_year(y)==1)
//         {
//             printf("%d\n",y);
//         }
//     }




//     return 0;
// }

// int binary_search(int x[],int y, int z)
// {
//     int i = 0;
//     int left = 0;
//     int right = z-1;
//     while(left<=right)
//     {    int mid = (left+right)/2;
//         if(x[mid]>y)
//         {
//             right = mid-1;
//         }
//         else if (x[mid]<y) 
//         {   left = mid+1;}
//         else if (x[mid]==y)
//             return mid;
// }
//     return -1;
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int key = 14;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int ret = binary_search(arr,key,sz);

//     if (-1 == ret)
//     {
//         printf("找不到\n");
//     }
//     else
//         printf("下标是:%d\n",ret);

//     return 0;
// }

// void add(int *n)
// {

//     (*n) ++;
// }

// int main()
// {
//     int num = 0;
//     add(&num);
//     printf("%d\n",num);
//     return 0;
// }


// int main ()
// {
//     printf("%d\n",printf("%d\n",printf("%d\n",43)));



//     return 0;
// }

// #include "add.h"
// int main()
// {
//     int a = 1;
//     int b = 2;
//     printf("%d\n",add(a,b));
// }


// void print (int x)
// {
//     if (x>9)
// {
//     print(x/10);
// }
//     printf("%d\n",x%10);
// }

// int main()
// {
//     unsigned int a = 0;
//     scanf("%u",&a);
//     print(a);


//     return 0;
// }

// int my_strlen(char* str)
// {
//     if (*str!='\0')
//     {
//         return 1 + my_strlen(str+1);

//     }
//     else 
//         return 0;
// }

// int main()
// {
//     char arr[]="bit";
//     printf("%d",my_strlen(arr));


//     return 0;
// }

// int Fac(int x)
// {
//     if(x<=1)
//     {
//         return 1;
//     }
//     else
//     {
//         return x*Fac(x-1);
//     }
// }



// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int ret = Fac(n);
//     printf("%d\n",ret);

//     return 0;
// }


// int fab(int x)
// {
//     if (x<=2)
//     {
//         return 1;
//     }
//     else return fab(x-1)+fab(x-2);
// }

// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     printf("%d\n",fab(n));


//     return 0;
// }
// int fab (int x)
// {
//     int a = 1;
//     int b = 1;
//     int c = 1;
//     while (x>2)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         x--;
//     }
//     return c;


// }

// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     printf("%d\n",fab(n));
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     int count = 0;
//     for (i=1;i<=100;i++)
//     {
//         if (i%10==9)
//         count++;
//         if (i/10==9)
//         count++;

//     }

//     printf("%d\n",count);

//     return 0;
// }

// int main()
// {
//     int a = 1;
//     int b = 2;
//     double ret = 0;
//     for(a=1,b=2;a<=99 && b<=100;a+=2,b+=2)
//     {ret += (1.0/a) - (1.0/b);

//     }
//     printf("%f\n",ret);
//     return 0;

// }

// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int i = 0;
//     int ret = arr[0];
//     for(i=0;i<10;i++)
//     {
//         if(arr[i]>ret)
//         ret = arr[i];
//     }

//     printf("%d\n",ret);
//     return 0;
// }

// int main()
// {
//     int a = 1;
//     int b = 1;
//     int ret = 0;
//     for (a=1,b=1;a<10 && b<10;a++)
//     {
    
//     ret = a * b; 
//     printf("%d * %d = %2d ",a,b,ret);
//     if (a==9)
//     {
//         b++;
//         a=b-1;
//         printf("\n");
//     }
//     }



//     return 0;
// }


// void print_table(int n)
// {
//     int i = 0;
//     int a = 0;
//     for(i=1;i<=n;i++)
//     {
//         for(a=1;a<=i;a++)
//         {printf("%d*%d=%2d ",i,a,a*i);}
//         printf("\n");
//     }


// }

// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     print_table(n);

//     return 0;
// }

// int my_strlen(char *str)
// {
//     int count = 0;
//     while (*str != 0)
//     {
//         count ++;
//         str++;
//     }
//     return count;
// }


// void reverse_string(char *str)
// {
//     int left = 0;
//     int right = my_strlen(str)-1;
//     char tmp = 0;
//     while(left<right)
//     {
//         char tmp = str[left];
//         str[left]=str[right];
//         str[right]=tmp; 
//         left++;
//         right--;
//     }

// }

// int my_strlen(char *str)
// {
//     int count = 0;
//     while (*str != 0)
//     {
//         count ++;
//         str++;
//     }
//     return count;
// }


// void reverse_string(char *str)
// {
//     char tmp = *str;
//     int len = my_strlen(str);
//     *str = *(str+len-1);
//     *(str+len-1)='\0';
//     if(my_strlen(str+1)>=2)
//     {reverse_string(str+1);}
//     *(str+len-1)=tmp;
// }   
// int main()
// {
//     char arr[]="abcdef";
//     reverse_string(arr);
//     printf("%s\n",arr);

//     return 0;
// }

int a = 0;
// int sum = 0;
// int my_sum(int i)
// {
//     a=i%10;
//     sum += a;
//     if(i>=10)
//     {
//         my_sum(i/10);
//     }
//     return sum;

// }

// int main()
// {
//     int i = 0;
//     scanf("%d",&i);
//     int ret = my_sum(i);
//     printf("%d\n",ret);

//     return 0;
// }


// double pow(int n, int k)
// { 
//     if (k>0)
//     {
//         return n*pow(n,k-1);
//     }
//     else if (k==0)
//     return 1.0;
//     else
//     return 1.0/(pow(n,-k));
// }

// int main()
// {
//     int n = 0;
//     int k = 0;
//     scanf("%d %d",&n,&k);
//     double ret = pow(n,k);
//     printf("%lf\n",ret);

//     return 0;
// }


// void bubble_sort(int arr[],int sz)
// {
//     int i = 0;
//     int flag = 1;
//     for(i=0;i<sz-1;i++)
//     {
//         int j = 0;
//         for(j=0;j<sz-1-i;j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 int tmp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=tmp;
//                 flag = 0;
//             }
//         }
//         if (flag == 1)
//         {
//             break;
//         }
//     }
// }

// int main ()
// {
//     int arr[]={9,8,7,6,5,4,3,2,1,0};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     printf("%p\n",arr);
//     return 0;
// }

int main()
{
    char a = 3;
    char b = 127;
    char c = a + b;
    printf("%d\n",c);

    return 0;
}