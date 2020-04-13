#include <stdio.h>
int main()
{
    int i, j, n;
printf("Enter n: ");
    scanf("%d", &n);
for(i=1; i<=n; i++)
    {
        for(j=0; j<2*i; j++)
        { 
		   printf("%d", (j & 1));
		   }
		    printf("\n");
    }
 return 0;
}
