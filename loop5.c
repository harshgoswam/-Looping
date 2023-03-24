#include <stdio.h>
main()
{
	int N,a=1;
	
	printf("Enter value N=");
	scanf("%d",&N);
	
	while(a<=N)
	{ 
    	if(a%2==0)
    	{
    	  printf("%d\n",a);
		}
        a++;
	}

}

