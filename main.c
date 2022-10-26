#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )  {
   if(argc < 2) {
      printf("One argument expected.\n");
   }
   int* arr;
   int count = atoi(argv[1]);
   arr = malloc(count *sizeof(arr[0]));
   int a;
   for(int i = 0; i < count; ++i){
    scanf("%d", &arr[i]);
   }

    for (int i = 0; i < count; ++i) 
    {
        for (int j = i + 1; j < count; ++j) 
        {
            if (arr[i] < arr[j]) 
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    for(int i = 0; i < count; ++i){
        printf("%d", arr[i]);
    }
   
}