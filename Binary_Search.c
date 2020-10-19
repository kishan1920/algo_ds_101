#include<stdio.h>
#include<conio.h>
int main()
{
   int i, first, last, mid, n, search, ar[100];

   printf("Enter total number of elements:\n");
   scanf("%d",&n);

   printf("Enter elements:\n");

   for (i = 0; i < n; i++)
      scanf("%d",&ar[i]);

   printf("Enter element to be search:\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   mid = (first+last)/2;

   while (first <= last) {
      if (ar[mid] < search)
         first = mid + 1;
      else if (ar[mid] == search) {
         printf("%d found at location %d.\n", search, mid+1);
         break;
      }
      else
         last = mid - 1;

      mid = (first + last)/2;
   }
   if (first > last)
      printf("Not found\n");

   return 0;
}
