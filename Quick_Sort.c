#include<stdio.h>
#include<conio.h>

void quicksort (int [], int, int);

int main()
{
    int ar[50];
    int n, i;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    quicksort(ar, 0, n-1);
    printf("After applying quick sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}
void quicksort(int ar[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j)
        {
            while (ar[i] <= ar[pivot] && i <= high)
            {
                i++;
            }
            while (ar[j] > ar[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        temp = ar[j];
        ar[j] = ar[pivot];
        ar[pivot] = temp;
        quicksort(ar, low, j-1);
        quicksort(ar, j+1, high);
    }
}
