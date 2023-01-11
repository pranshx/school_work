#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value;
    int arr[6] = {23,45,32,12,54,32};
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                value = arr[i];
                arr[i] = arr[j];
                arr[j] = value;
            }
              
        }
        
        
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ",arr[i]);
        
    }
    
    
    return 0;
}
