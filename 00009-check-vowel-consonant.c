#include <stdio.h>
#include <ctype.h>

int main() {
  char c;
  int isLowercaseVowel, isUppercaseVowel;

  do {
    printf("Enter an alphabet: ");
    scanf(" %c", &c);
  } while (!isalpha(c));

  isLowercaseVowel = (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o');
  isUppercaseVowel = (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O');

  if (isLowercaseVowel || isUppercaseVowel)
    printf("%c is a vowel.\n", c);
  else
    printf("%c is a consonant.\n", c);

  return 0;
}
