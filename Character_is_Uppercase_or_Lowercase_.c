#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='q'||ch=='w'||ch=='e'||ch=='r'||ch=='t'||ch=='y'||ch=='u'||ch=='i'||ch=='o'||ch=='p'||ch=='a'||ch=='s'||ch=='d'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='z'||ch=='x'||ch=='c'||ch=='v'||ch=='b'||ch=='n'||ch=='m')
    {
        printf("lowercase alphabet");
    }
    else if(ch=='Q'||ch=='W'||ch=='E'||ch=='R'||ch=='T'||ch=='Y'||ch=='U'||ch=='I'||ch=='O'||ch=='P'||ch=='A'||ch=='S'||ch=='D'||ch=='F'||ch=='G'||ch=='H'||ch=='J'||ch=='K'||ch=='L'||ch=='Z'||ch=='X'||ch=='C'||ch=='V'||ch=='B'||ch=='N'||ch=='M')
    {
        printf("uppercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}