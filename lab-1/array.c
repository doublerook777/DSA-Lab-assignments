#include <stdio.h>

void printArray(int arr[], int size);

int main() {
    int n;
    int arr[25];
    printf("Enter number of elements (between 1 to 24): ");
    scanf("%d", &n);

    printf("Enter elements separated by a space \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n);

    // Linear search
    printf("Enter the key to search: ");
    int key;
    int found = 0;
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Found!, at index %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found != 1)
    {
        printf("Not found\n");
    }

    // minimum and maximum
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    // insertion at any position
    int pos = 50; 
    do
    {
        printf("Enter position at which to insert: ");
        scanf("%d", &pos);
    }
    while(pos > n);

    // shifting
    for (int i = n; i > (pos - 1); i--)
    {
        arr[i] = arr[i - 1];
    }
    // inseting
    int insert;
    printf("Enter value to insert: ");
    scanf("%d", &insert);
    arr[pos - 1] = insert;
    
    // increasing the array size
    n++;

    // printing the new array
    printArray(arr, n);

    // insertion at beginning
    pos = 1;
    for (int i = n; i > (pos - 1); i--)
    {
        arr[i] = arr[i - 1];
    }
    printf("Enter value to insert at beginning: ");
    scanf("%d", &insert);
    arr[pos - 1] = insert;

    // increasing the array size
    n++;

    // printing the new array
    printArray(arr, n);

    // inseting at end
    pos = n;
    printf("Enter value to insert at end: ");
    scanf("%d", &insert);

    arr[n] = insert;

    // increasing the array size
    n++;

    // printing the new array
    printArray(arr, n);

    // deletion
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (int i = (pos - 1); i < (n - 1); i++)
    {
        arr[i] = arr[i+1];
    }

    // shrinking n
    n--;

    // printing
    printArray(arr, n);

    // deletion at begining
    printf("\n=====deleting element at beginning=====\n");
    pos = 1;
    for (int i = (pos - 1); i < (n - 1); i++)
    {
        arr[i] = arr[i+1];
    }
    // shrinking n
    n--;

    // printing
    printArray(arr, n);

    // deletion at end
    printf("\n=====deleting element at end=====\n");
    pos = n;
    for (int i = (pos - 1); i < (n - 1); i++)
    {
        arr[i] = arr[i+1];
    }
    // shrinking n
    n--;
    // printing
    printArray(arr, n);

    return 0;
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
  {
      printf("%i, ", arr[i]);
  }
  printf("\n");
}
