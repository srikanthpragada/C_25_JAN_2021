// Returns position of num in arr if found otherwise returns -1
int find(int arr[10], int num)
{
  int i;

     for(i = 0; i < 10; i ++)
     {
        if(arr[i] == num)
            return i;  // found at position i
     }

     return -1; // not found
}

int sum(int arr[10])
{
  int i, total = 0;

     for(i = 0; i < 10; i ++)
        total += arr[i];

     return total;
}

void main()
{
   int a[10] = {0,1,2,8,5,6,7,9,23,34};

      printf("Total = %d", sum(a));
      printf("\nPosition = %d", find(a,18));


}
