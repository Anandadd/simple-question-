#include<stdio.h>
main()
{
    char m;
    printf("enter character");
    scanf("%c",&m);
    switch (m)
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
    case 'U': printf("vowels");
    break;
    default : printf("consonant");
    }
}
