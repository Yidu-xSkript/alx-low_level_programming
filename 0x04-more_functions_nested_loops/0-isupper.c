#include <ctype.h>

/**
* _isupper - Check uppercase values
* Description: Upper case values test
* @c: int input
* Result: 0 or 1 (Success)
*/

int _isupper(int c)
{
    if (isupper(c))
        return (1);
    else
        return (0);
}