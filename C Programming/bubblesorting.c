#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value;
    int arr[6] = {23,45,32,12,54,32};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                value = arr[j];
                arr[j] = arr[j +1];
                arr[j +1] = value;
            }
              
        }
        
        
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ",arr[i]);
        
    }
    
    
    return 0;
}
