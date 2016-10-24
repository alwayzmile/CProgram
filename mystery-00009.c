#include <stdio.h>
#include <ctype.h>

int main() {
  char c;
  int isLowercaseVowel, isUppercaseVowel;

  do {
    printf("Enter an alphabet: ");
    /**
     * How does this space on scanf actually works?
     * It doesn't work as expected when I input:
     * "0k" without quotes.
     * It gives me:
     * Enter an alphabet: k is a consonant.
     *
     * My speculation:
     * When 0 is inputed, it read (none)0, so it's not an alphabet,
     * then when k is inputed, it read (none)k, so it's a consonant.
     */
    scanf(" %c", &c);
    printf("c: %c\n", c);
  } while (!isalpha(c));

  isLowercaseVowel = (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o');
  isUppercaseVowel = (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O');

  if (isLowercaseVowel || isUppercaseVowel)
    printf("%c is a vowel.\n", c);
  else
    printf("%c is a consonant.\n", c);

  return 0;
}
