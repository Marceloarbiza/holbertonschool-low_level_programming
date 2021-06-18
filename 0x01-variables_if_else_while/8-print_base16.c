#include <stdio.h>
int main(void){
        int c; 
	char a, line;
        line = '\n';
        for (c = 0 ; c <= 9 ; c++)
        {
                putchar(c + '0');
        }
        for (a = 'a'; a <= 'f'; a++)
        {
                putchar(a);
        }
        putchar(line);
        return(0);
}
