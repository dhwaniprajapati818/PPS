#include <stdio.h>
int main() 
{
    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

     uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

     if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) 
        {
        printf("Error! That's not an alphabetic character.\n");
        } 
     else if (lowercase_vowel || uppercase_vowel) 
        {
        printf("%c is a vowel.\n", c);
         } 
     else {
        printf("%c is a not vowel.\n", c);
         }

    return 0;
}
