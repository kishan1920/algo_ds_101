#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,ar[100],temp;
  clrscr();
  printf("Enter total number of element: ");
  scanf("%d",&n);
  printf("Enter elements\n");
  for(i=0;i<n;i++)
     scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
       if(ar[j]>ar[j+1])
       {
	  temp=ar[j];
	  ar[j]=ar[j+1];
	  ar[j+1]=temp;
       }
    }
  }
  printf("After sorting\n");
  for(i=0;i<n;i++)
    printf("%d ",ar[i]);
  getch();
}
