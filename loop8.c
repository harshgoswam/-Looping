#include<stdio.h>
 main()
{

    int n,a=1,sum=0;
    printf("Enter Number :");
    scanf("%d", &n);

    while(a<=n)
    {
    sum += a;
    a++;
    }
    printf("Sum = %d\n",sum);

}
