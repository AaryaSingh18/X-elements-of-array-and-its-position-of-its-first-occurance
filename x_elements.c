#include <stdio.h>

int main()
{
    int n, i, x;
    int arr[100];
    int count = 0;
    int position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            count++;

            if(position == -1)
            {
                position = i + 1;   // Position starts from 1
            }
        }
    }

    if(count > 0)
    {
        printf("\nElement %d occurs %d time(s).\n", x, count);
        printf("First occurrence is at position %d.\n", position);
    }
    else
    {
        printf("\nElement not found in the array.\n");
    }

    return 0;
}