 #include<stdio.h>
 int main ()
 {
     int n;
     double sum=0,x;
     scanf("%d",&n);
     int ara[n],i;
     for(i=0;i<n;i++)
     {
         scanf("%d",&ara[i]);
         sum=sum+ara[i];
     }
     x=sum/n;
     printf("%.12lf",x);


 }