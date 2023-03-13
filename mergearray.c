#include<stdio.h>
void main()
{    
   int n1,n2;
   printf("Enter the size of array 1:\n");
   scanf("%d",&n1);
   int ar1[n1];
   printf("Enter the no. of elements in array 1 :\n");
   for(int i=0;i<n1;i++)
   {
   scanf("%d",&ar1[i]);
   }
   printf("Enter the size of array 2:\n");
   scanf("%d",&n2);
   int ar2[n2];
   printf("Enter the no. of elements in array 2 :\n");
   for(int j=0;j<n2;j++)
   {
   scanf("%d",&ar2[j]);
   }
   int ar3[n1+n2],p=n1+n2;
   for(int k=0;k<n1;k++)
   {
    ar3[k]=ar1[k];
   }
    int o=0;
    for(int l=n1;l<n2+n1;l++)
   {
    ar3[l]=ar2[o];
    o++;
   }
   
   for(int m=0;m<p;m++)
   {
    printf("%d ",ar3[m]);
   }
}
