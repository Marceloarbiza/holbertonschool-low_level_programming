#include <stdio.h>
int main(void){
        int i, z;
        char line;
        line = '\n';
        for (i = 0; i <= 9 ; i++)
        {	
		for (z = 0; z <= 9; z++){
                	putchar(i + '0');
			putchar(z + '0');
		}
        }
        putchar(line);
        return(0);
}
