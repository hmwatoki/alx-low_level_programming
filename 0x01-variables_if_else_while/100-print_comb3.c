#include <stdio.h>

int main(void) {

    int i;
    int j;
    
    for (i = 0; i <= 9; i++) 
    {
        for (j = 0; j <= 9; j++) 
        {

            if (j > i) 
            {
                putchar('0'+i);
                putchar('0'+j);
                putchar(',');
                putchar(' ');
            }
        
        }
    }
    return 0;
}
