#include<stdio.h>
main() {

    char ch;

    printf("\nEnter a alphabet(a - z)");
    scanf("%c",&ch);
        switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
              printf("\nCharacter is a vowel");
              break;
        default:
              printf("%c alphabet is a consonant");
                   break;
}

return 0;


}
