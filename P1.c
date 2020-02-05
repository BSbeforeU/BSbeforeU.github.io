//Include definitions for C Runtime Library functions used in this program
#include <stdio.h>				//The standard I/O functions

//-------------------------------------------------------------------------------
//This is the main function, invoked by the C Runtime (CRT) to start the program
//-------------------------------------------------------------------------------
int main(void) {

int upperCase, lowerCase, vowels, consonants, digits, total, nextChar;
upperCase = 0;
lowerCase = 0;
vowels = 0;
consonants = 0;
digits = 0;
total = 0;

nextChar = getchar();
while (nextChar != EOF) {
if (nextChar == 65 || nextChar == 69 || nextChar == 73 || nextChar == 79 || nextChar == 85 || nextChar == 89)
++upperCase && ++vowels && ++total;
else if (nextChar == 97 || nextChar == 101 || nextChar == 105 || nextChar == 111 || nextChar == 117 || nextChar == 121)
++lowerCase && ++vowels && ++total;
else if (nextChar >= 65 && nextChar <= 90)
++upperCase && ++consonants && ++total;
else if (nextChar >= 97 && nextChar <= 122)
++lowerCase && ++consonants && ++total;
else if (nextChar >= 48 && nextChar <=57)
++digits && ++total;
else
++total;
nextChar = getchar();
}

printf("upper-case: %d\n", upperCase);
printf("lower-case: %d\n", lowerCase);
printf("vowels: %d\n", vowels);
printf("consonants: %d\n", consonants);
printf("digits: %d\n", digits);
printf("total: %d\n", total);

}
	
