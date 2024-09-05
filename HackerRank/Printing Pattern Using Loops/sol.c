#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;

    
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    int count = n;
    for (int i = 0 ; i < 2 * n - 1 ; i++){
        
        // start
        for (int j = n ; j > count; j--){
            printf("%d ",j);
        }
        
        // center
        for (int j = 0 ; j < 2 * (count) -1 ; j++){
            printf("%d ",count);
        }
        
        // end
        for (int j =count+1 ; j <= n ; j++){
            printf("%d ",j);
        }
        printf("\n");
    
        count -=(i >= (n-1))? -1: 1;
    }
    
    return 0;
}

