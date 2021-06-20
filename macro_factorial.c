
/* for and while loop in a Macro... factorial of a no using Macro */

#include <stdio.h>
#define PRINT_WHILE(i, limit) while (i < limit) \
                        { \
                            printf("Hello.. \n"); \
                            i++; \
                        }

#define PRINT_FOR(i, n) for ( i = 0; i < n; i++ ) \
                        { \
                            printf("World !! \n"); \
                        }


#define FACT(n) for (i = 1; i <= n; i++) \
                    { \
                        f = f*i; \
                    } \
                printf("\nFactorial is: %d \n\n", f);

// #define FACT(n) for (i = 1; i <= n; i++) f=f*i;printf("\nFactorial is: %d \n\n", f); // One liner


int main()
{
    int i = 0, no = 4, f = 1;
    PRINT_WHILE(i, no);
    PRINT_FOR(i, no);
    FACT(no);
    return 0;
}
