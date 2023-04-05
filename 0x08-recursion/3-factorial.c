#include "main.h"

/**
 * factorial - finds factorial
 * @m: int
 * Retuen: int
*/

int factorial (int m)
{

if (m < 0)
{
	return (-1);
}
else if (m == 0)
{
	return (1);

}

return (m * factorial(m - 1));

}
