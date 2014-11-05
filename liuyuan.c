#include<stdio.h>
  main()
  {  
     int a[3];
     int i,pass,hoad;
     printf("shu ru  san ge shuzi:");
   scanf("%2d%2d%2d",&a[0],&a[1],&a[2]);
     for(i=0;i<=2;i++) 
     printf("%4d",a[i]);
       printf("\n");
  for(pass=1;pass<=2;pass++)
    for(i=0;i<=1;i++)
       if(a[i]>a[i+1]){
         hoad=a[i];
        a[i]=a[i+1];
          a[i+1]=hoad;   }
   for(i=0;i<=2;i++)
      printf("%4d",a[i]);
    printf("\n");
getch();
}