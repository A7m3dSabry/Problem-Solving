/*

Result = 100%

*/

#include <stdio.h>

typedef struct UserInfo
{
    
    char gender;
    char credit_rating;
    short account_type_code;
    
    int id;
    int account_number;
    int years_member;
    float interest;
    
    char* name;
    long long credit_amount;
    
    
} UserInfo;

#ifndef RunTests
int main()
{
    printf("%d", sizeof(UserInfo));
}
#endif