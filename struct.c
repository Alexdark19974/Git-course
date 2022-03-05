#include <stdio.h>

struct key
{
    int password;
};

int main (void)
{
    struct key password = {12345};
    
    return 0;
}