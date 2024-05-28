/*

Result : 100%

*/



#include <stdlib.h>
#include <stdio.h>

int inspect_bits(unsigned int number)
{
    int last_bit = number & 0x1;
    
    for (int i = 1 ; i < sizeof(number) * 8 ; i ++){
        if (((number>>i) & 0x1 == 1) && (last_bit == 1)){
            return 1;
        }
        last_bit = (number>>i) & 0x1;
    }
    return 0;
}

#ifndef RunTests
int main ()
{
    printf("%d", inspect_bits(13));
}
#endif