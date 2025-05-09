#include <stdio.h>
 void main()
{
int p,c,m;
printf("enter marks of p,c,m");
scanf("%d  %d %d",&p,&c,&m);
 
 if(p>=50)
    { 
        if(c>=55)
        {
            if(m>=60)
            {
                if(p+c+m>=220)
                {
                    printf("admission is given");
                    }
                    else if (p+m>=130)
                   { printf("admisson given");
                   }
                   else
                   {
                    printf("admission not give");
                   }             
           }
       else
       printf("admission not given");
        }
     else
     printf("admission not given");
     }
   else
   printf("admission not give");
   getch();  
}