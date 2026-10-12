#include <stdio.h>

int main() {
    char s[5];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    s[4] = '\0'; // contenait des caractères non définit avant la fin de la chaine
    char a = 'b';
    printf("%s\n", s); 
    return 0;
}
