#include<stdio.h>
#include<string.h>
int main()
{
	int d, e, i, j, c;
    char a[50], b[50];
    printf("Enter a string:");
    gets(a);
    printf("Enter b substring:");
    gets(b);  
	d = strlen(a);
	e = strlen(b);
    for (i=0;i<=d-e;i++)
    {
        for (j=i;j<i+e;j++)
        {
            c = 1;
            if (a[j] != b[j - i])
            {
                c = 0;
                break;
            }
        }
        if (c == 1)
        {
            break;	
		}
    }
   if (c == 1)
   {
		printf("The position of the substring is: %d",i);
   }
   else
    {
    	printf("The substring is not present"); 
	}
}
