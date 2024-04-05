#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

#define Green "\e[0;32m"
#define White "\e[0;37m"
#define reset "\e[0m"
#define bred "\e[0;91m"
#define yellow "\e[0;33m"
#define whitebg "\e[0;47m"
#define redbg "\e[41m"
#define cyanbg "\e[46m"
void board(char a[100], char b[100], char c[100], char d[100], int d1);
void dicep(int d);
int dice();
int main()
{ // defined aarray a b c d
start:
    printf("\e[1;1H\e[2J");
    printf(bred "R  " reset);
    usleep(50000);
    printf(bred "U  " reset);
    usleep(50000);
    printf(bred "L  " reset);
    usleep(50000);
    printf(bred "E  " reset);
    usleep(50000);
    printf(bred "S  " reset);
    usleep(50000);
    printf(yellow "\n%cEach player puts their counter on the number 1" reset, 26);
    sleep(2);
    printf(yellow "\n%cTake it in turns to roll the dice" reset, 26);
    sleep(2);
    printf(yellow "\n%cIf your counter lands at the bottom of a ladder, you can move up to the top of the ladder" reset, 26);
    sleep(2);
    printf(yellow "\n%cIf your counter lands on the head of a snake, you must slide down to the bottom of the snake" reset, 26);
    sleep(2);
    printf(yellow "\n%cRed coloured number indicates head of the snake" reset, 26);
    sleep(2);
    printf(yellow "\n%cCyan coloured number indicates bottom of the ladder" reset, 26);
    sleep(2);
    printf("\n");

    printf(bred "H  " reset);
    usleep(50000);
    printf(bred "A  " reset);
    usleep(50000);
    printf(bred "V  " reset);
    usleep(50000);
    printf(bred "E  " reset);
    usleep(50000);
    printf(bred "   " reset);
    usleep(50000);
    printf(bred "F  " reset);
    usleep(50000);
    printf(bred "U  " reset);
    usleep(50000);
    printf(bred "N  " reset);
    usleep(50000);
    printf(bred "!" reset);
    usleep(50000);
    sleep(2);
    printf("\e[1;1H\e[2J");
    sleep(1);
    char a[100], b[100], c[100], d[100], ch;
    int d1 = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            a[i] = 'a';
        }
        else
        {
            a[i] = ' ';
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            b[i] = 'b';
        }
        else
        {
            b[i] = ' ';
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            c[i] = 'c';
        }
        else
        {
            c[i] = ' ';
        }
    }
    for (int i = 0; i < 100; i++)
    {
        if (i == 0)
        {
            d[i] = 'd';
        }
        else
        {
            d[i] = ' ';
        }
    }
    board(a, b, c, d, d1);
    printf("\e[1;1H\e[2J");
    board(a, b, c, d, d1);
    for (int co = 0;; co++)
    {
        int a1, p;
        // p determines the position of array
        if (a[99] != ' ')
        {
            ch = 'a';
            goto end;
        }
        if (b[99] != ' ')
        {
            ch = 'b';
            goto end;
        }
        if (c[99] != ' ')
        {
            ch = 'c';
            goto end;
        }
        if (d[99] != ' ')
        {
            ch = 'd';
            goto end;
        }
    label:
        printf("\nenter 1 to roll die");
        scanf("%d", &a1);
        if (a1 == 1)
        {
            d1 = dice();
        }
        else
        {
            printf("entered invalid number!");
            goto label;
        }

        if (co % 4 == 0)
        {
            for (int i = 0; i < 100; i++)
            {
                if (a[i] == 'a')
                {
                    p = i;
                }
            }
            if (p + d1 < 100)
            {
                if (p + d1 == 12)
                {
                    a[6] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 18)
                {
                    a[3] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 47)
                {
                    a[13] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 56)
                {
                    a[35] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 67)
                {
                    a[48] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 82)
                {
                    a[60] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 86)
                {
                    a[65] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 93)
                {
                    a[87] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 97)
                {
                    a[83] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 5)
                {
                    a[23] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 9)
                {
                    a[11] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 10)
                {
                    a[32] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 19)
                {
                    a[37] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 39)
                {
                    a[58] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 44)
                {
                    a[53] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 63)
                {
                    a[77] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 71)
                {
                    a[90] = a[p];
                    a[p] = ' ';
                }
                else if (p + d1 == 85)
                {
                    a[95] = a[p];
                    a[p] = ' ';
                }
                else
                {
                    a[p + d1] = a[p];
                    a[p] = ' ';
                }
                board(a, b, c, d, d1);
            }
            else
            {
                continue;
            }
        }
        else if (co % 4 == 1)
        {
            for (int i = 0; i < 100; i++)
            {
                if (b[i] == 'b')
                {
                    p = i;
                }
            }
            if (p + d1 < 101)
            {
                if (p + d1 == 12)
                {
                    b[6] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 18)
                {
                    b[3] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 47)
                {
                    b[13] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 56)
                {
                    b[35] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 67)
                {
                    b[48] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 82)
                {
                    b[60] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 86)
                {
                    b[65] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 93)
                {
                    b[87] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 97)
                {
                    b[83] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 5)
                {
                    b[23] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 9)
                {
                    b[11] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 10)
                {
                    b[32] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 19)
                {
                    b[37] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 39)
                {
                    b[58] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 44)
                {
                    b[53] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 63)
                {
                    b[77] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 71)
                {
                    b[90] = b[p];
                    b[p] = ' ';
                }
                else if (p + d1 == 85)
                {
                    b[95] = b[p];
                    b[p] = ' ';
                }
                else
                {
                    b[p + d1] = b[p];
                    b[p] = ' ';
                }
                board(a, b, c, d, d1);
            }
            else
            {
                continue;
            }
        }
        else if (co % 4 == 2)
        {
            for (int i = 0; i < 100; i++)
            {
                if (c[i] == 'c')
                {
                    p = i;
                }
            }
            if (p + d1 < 101)
            {
                if (p + d1 == 12)
                {
                    c[6] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 18)
                {
                    c[3] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 47)
                {
                    c[13] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 56)
                {
                    c[35] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 67)
                {
                    c[48] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 82)
                {
                    c[60] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 86)
                {
                    c[65] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 93)
                {
                    c[87] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 97)
                {
                    c[83] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 5)
                {
                    c[23] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 9)
                {
                    c[11] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 10)
                {
                    c[32] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 19)
                {
                    c[37] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 39)
                {
                    c[58] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 44)
                {
                    c[53] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 63)
                {
                    c[77] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 71)
                {
                    c[90] = c[p];
                    c[p] = ' ';
                }
                else if (p + d1 == 85)
                {
                    c[95] = c[p];
                    c[p] = ' ';
                }
                else
                {
                    c[p + d1] = c[p];
                    c[p] = ' ';
                }
                board(a, b, c, d, d1);
            }
            else
            {
                continue;
            }
        }
        else if (co % 4 == 3)
        {
            for (int i = 0; i < 100; i++)
            {
                if (d[i] == 'd')
                {
                    p = i;
                }
            }
            if (p + d1 < 101)
            {

                if (p + d1 == 12)
                {
                    d[6] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 18)
                {
                    d[3] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 47)
                {
                    d[13] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 56)
                {
                    d[35] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 67)
                {
                    d[48] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 82)
                {
                    d[60] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 86)
                {
                    d[65] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 93)
                {
                    d[87] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 97)
                {
                    d[83] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 5)
                {
                    d[23] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 9)
                {
                    d[11] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 10)
                {
                    d[32] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 19)
                {
                    d[37] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 39)
                {
                    d[58] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 44)
                {
                    d[53] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 63)
                {
                    d[77] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 71)
                {
                    d[90] = d[p];
                    d[p] = ' ';
                }
                else if (p + d1 == 85)
                {
                    d[95] = d[p];
                    d[p] = ' ';
                }
                else
                {
                    d[p + d1] = d[p];
                    d[p] = ' ';
                }
                board(a, b, c, d, d1);
            }
            else
            {
                continue;
            }
        }
    }
end:
    printf("%c wins the match", ch);
    if (ch == 'a')
    {
        int e = MessageBox(NULL, "a wins the match", "WINNIG_PLAYER", MB_OK);
        if (e == IDOK)
        {
            int r = MessageBox(NULL, "WANNA PLAY AGAIN", "ALERT", MB_YESNO | MB_ICONEXCLAMATION);
            if (r == IDYES)
            {
                goto start;
            }
            else
            {
                MessageBox(NULL, "YOU HAD A NICE GAME\nTHANKYOU FOR PLAYING\nHAVE CHILL", "MESSAGE", MB_OK);
            }
        }
    }
    else if (ch == 'b')
    {
        int e = MessageBox(NULL, "b wins the match", "WINNIG_PLAYER", MB_OK);
        if (e == IDOK)
        {
            int r = MessageBox(NULL, "WANNA PLAY AGAIN", "ALERT", MB_YESNO | MB_ICONEXCLAMATION);
            if (r == IDYES)
            {
                goto start;
            }
            else
            {
                MessageBox(NULL, "YOU HAD A NICE GAME\nTHANKYOU FOR PLAYING\nHAVE CHILL", "MESSAGE", MB_OK);
            }
        }
    }
    else if (ch == 'c')
    {
        int e = MessageBox(NULL, "c wins the match", "WINNIG_PLAYER", MB_OK);
        if (e == IDOK)
        {
            int r = MessageBox(NULL, "WANNA PLAY AGAIN", "ALERT", MB_YESNO | MB_ICONEXCLAMATION);
            if (r == IDYES)
            {
                goto start;
            }
            else
            {
                MessageBox(NULL, "YOU HAD A NICE GAME\nTHANKYOU FOR PLAYING\nHAVE CHILL", "MESSAGE", MB_OK);
            }
        }
    }
    else if (ch == 'd')
    {
        int e = MessageBox(NULL, "d wins the match", "WINNIG_PLAYER", MB_OK);
        if (e == IDOK)
        {
            int r = MessageBox(NULL, "WANNA PLAY AGAIN", "ALERT", MB_YESNO | MB_ICONEXCLAMATION);
            if (r == IDYES)
            {
                goto start;
            }
            else
            {
                MessageBox(NULL, "YOU HAD A NICE GAME\nTHANKYOU FOR PLAYING\nHAVE CHILL", "MESSAGE", MB_OK);
            }
        }
    }
}
// function definition to print board
void board(char a[100], char b[100], char c[100], char d[100], int d1)
{
    for (int w = 0; w < 4; w++)
    {
        printf("\n");
    }
    for (int w = 0; w < 40; w++)
    {
        printf(" ");
    }
    for (int i = 0; i < 81; i++)
    {
        printf("-");
    }
    printf("\n");
    for (int i = 10; i >= 1; i--)
    {
        if (i % 2 == 1)
        {
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            printf("|");
            for (int j = 10 * (i - 1) + 1; j <= 10 * i; j++)
            {
                if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                {
                    printf(redbg "%c" reset, a[j - 1]);
                }
                else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                {
                    printf(cyanbg "%c" reset, a[j - 1]);
                }
                else
                {
                    printf("%c", a[j - 1]);
                }
                for (int k = 0; k < 5; k++)
                {
                    if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                    {
                        printf(redbg " " reset);
                    }
                    else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                    {
                        printf(cyanbg " " reset);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                {
                    printf(redbg "%c" reset, b[j - 1]);
                }
                else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                {
                    printf(cyanbg "%c" reset, b[j - 1]);
                }
                else
                {
                    printf("%c", b[j - 1]);
                }
                printf("|");
            }
            printf("\n");
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            printf("|");
            for (int j = 10 * (i - 1) + 1; j <= 10 * i; j++)
            {
                if (j < 10)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                    {
                        printf(redbg "%d" reset, j);
                    }
                    else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                    {
                        printf(cyanbg "%d" reset, j);
                    }
                    else
                    {
                        printf("%d", j);
                    }
                    for (int k = 0; k < 3; k++)
                    {
                        if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("|");
                }
                else if (j < 100 && j > 9)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                    {
                        printf(redbg "%d" reset, j);
                    }
                    else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                    {
                        printf(cyanbg "%d" reset, j);
                    }
                    else
                    {
                        printf("%d", j);
                    }
                    for (int k = 0; k < 2; k++)
                    {
                        if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("|");
                }
            }
            if(i==9){
                printf("          98  %c  84\t",26);
                printf("          86  %c  96\t",26);
            }
            else if(i==7){
                printf("          87  %c  66\t",26);
                printf("          64  %c  78\t",26);
            }
            else if(i==5){
                printf("          68  %c  49\t",26);
                printf("          40  %c  59\t",26);
            }
             else if(i==3){
                printf("          48  %c  14\t",26);
                printf("          11  %c  33\t",26);
            }
             else if(i==1){
                printf("          13  %c   7\t",26);
                printf("           6  %c  24\t",26);
            }
            printf("\n");
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            printf("|");
            for (int j = 10 * (i - 1) + 1; j <= 10 * i; j++)
            {
                if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                {
                    printf(redbg "%c" reset, c[j - 1]);
                }
                else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                {
                    printf(cyanbg "%c" reset, c[j - 1]);
                }
                else
                {
                    printf("%c", c[j - 1]);
                }
                for (int k = 0; k < 5; k++)
                {
                    if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                    {
                        printf(redbg " " reset);
                    }
                    else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                    {
                        printf(cyanbg " " reset);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                if ((j == 48) || (j == 83) || (j == 87) || (j == 68))
                {
                    printf(redbg "%c" reset, d[j - 1]);
                }
                else if ((j == 10) || (j == 45) || (j == 64) || (j == 86) || (j == 6))
                {
                    printf(cyanbg "%c" reset, d[j - 1]);
                }
                else
                {
                    printf("%c", d[j - 1]);
                }
                printf("|");
            }
            printf("\n");
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            for (int i = 0; i < 81; i++)
            {
                printf("-");
            }
            printf("\n");
        }
        else if (i % 2 == 0)
        {
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            printf("|");
            for (int j = 10 * i; j >= 10 * (i - 1) + 1; j--)
            {
                if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                {
                    printf(redbg "%c" reset, a[j - 1]);
                }
                else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                {
                    printf(cyanbg "%c" reset, a[j - 1]);
                }
                else
                {
                    printf("%c", a[j - 1]);
                }
                for (int k = 0; k < 5; k++)
                {
                    if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                    {
                        printf(redbg " " reset);
                    }
                    else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                    {
                        printf(cyanbg " " reset);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                {
                    printf(redbg "%c" reset, b[j - 1]);
                }
                else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                {
                    printf(cyanbg "%c" reset, b[j - 1]);
                }
                else
                {
                    printf("%c", b[j - 1]);
                }
                printf("|");
            }
            printf("\n");
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            printf("|");
            for (int j = 10 * i; j >= 10 * (i - 1) + 1; j--)
            {
                if (j < 10)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                    {
                        printf(redbg "%d" reset, j);
                    }
                    else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                    {
                        printf(cyanbg "%d" reset, j);
                    }
                    else
                    {
                        printf("%d", j);
                    }
                    for (int k = 0; k < 3; k++)
                    {
                        if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("|");
                }
                else if (j < 100 && j > 9)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                    {
                        printf(redbg "%d" reset, j);
                    }
                    else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                    {
                        printf(cyanbg "%d" reset, j);
                    }
                    else
                    {
                        printf("%d", j);
                    }
                    for (int k = 0; k < 2; k++)
                    {
                        if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                        {
                            printf(redbg " " reset);
                        }
                        else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                        {
                            printf(cyanbg " " reset);
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("|");
                }
                else if (j == 100)
                {
                    printf("  100  |");
                }
            }
            if (i == 10)
            {
                printf("          snakes position :\t");
                printf(" ladders");
            }
            else if (i == 8)
            {
                printf("          94  %c  88\t", 26);
                printf("          72  %c  91\t", 26);
            }
            else if (i == 6)
            {
                printf("          83  %c  61\t", 26);
                printf("          45  %c  54\t", 26);
            }
            else if (i == 4)
            {
                printf("          57  %c  36\t", 26);
                printf("          20  %c  38\t", 26);
            }
            else if (i==2){
                printf("          19  %c   4\t",26);
                printf("          10  %c  12\t",26);

            }

            printf("\n");
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            printf("|");
            for (int j = 10 * i; j >= 10 * (i - 1) + 1; j--)
            {
                if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                {
                    printf(redbg "%c" reset, c[j - 1]);
                }
                else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                {
                    printf(cyanbg "%c" reset, c[j - 1]);
                }
                else
                {
                    printf("%c", c[j - 1]);
                }
                for (int k = 0; k < 5; k++)
                {
                    if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                    {
                        printf(redbg " " reset);
                    }
                    else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                    {
                        printf(cyanbg " " reset);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                if ((j == 13) || (j == 19) || (j == 57) || (j == 94) || (j == 98))
                {
                    printf(redbg "%c" reset, d[j - 1]);
                }
                else if ((j == 11) || (j == 20) || (j == 40) || (j == 72))
                {
                    printf(cyanbg "%c" reset, d[j - 1]);
                }
                else
                {
                    printf("%c", d[j - 1]);
                }
                printf("|");
            }
            printf("\n");
            for (int w = 0; w < 40; w++)
            {
                printf(" ");
            }
            for (int i = 0; i < 81; i++)
            {
                printf("-");
            }
            printf("\n");
        }
    }
    dicep(d1);
}
int dice()
{
    srand(time(0));
    int d = rand() % 6 + 1;
    return d;
}
void dicep(int d)
{
    for (int i = 0; i < 80; i++)
    {
        printf(" ");
    }
    printf(whitebg "       " reset);
    printf("\n");
    for (int i = 0; i < 80; i++)
    {
        printf(" ");
    }
    printf(whitebg "   %d   " reset, d);
    printf("\n");
    for (int i = 0; i < 80; i++)
    {
        printf(" ");
    }
    printf(whitebg "       " reset);
    printf("\n");
}
