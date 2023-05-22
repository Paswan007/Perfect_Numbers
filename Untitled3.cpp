#include<stdio.h>
int perfect(int);
main()
{int i,n;
printf("input a number");
scanf("%d",&n);
perfect(n);
}
int perfect(int n)
{int sum=0,i,t;
t=n;
for(i=1;i<n;i++)
{if(n%i==0)
sum=sum+i;
}
if(sum==t)
printf("perfect number");
else
printf("not perfect number");
}
