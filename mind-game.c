#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"taimr.h"
char gam[100], matsh[30], num[50], waaw[50], num1[10], num3[100], num2[50], peg[25], name[20], ordnu1[10], ordnu2[10], ordnu3[10], ordnu4[10];
int i = 0, l = 0, n, chil[3], anser[3], namber1(), namber2(), namber3(), namber4(), win(), j = 4;
float tim;
int win_val;
int main()
{
    int let;
    printf("\n\t\t\t\tStart ");
    over();
    char peg[25] = "\n\t\t\twelcom to my game \n";
    for (i = 0; peg[i] != '\0'; i++)
    {
        putchar(peg[i]);
        wait25(1);
    }
    printf("\n\t\t    i\'m mustafa what is your name?\n\t\t");
    gets(name);
    if ((strcmp(name, "mustafa") == 0) || (strcmp(name, "Mustafa") == 0) || (strcmp(name, "Mostafa") == 0) || (strcmp(name, "mostafa") == 0))
    {
        char matsh[30] = "\n\t\t\tReally just like my name";
        for (i = 0; matsh[i] != '\0'; i++)
        {
            putchar(matsh[i]);
            wait25(1);
        }
        wait(2);
        printf("\n\t\t\tok! anyway");
        wait(1);
        goto began;
        return 0;
    }
    else
    {
        goto began;
        return 1;
    }
began:
    system("cls");
    printf("\n nais to meed you  %s \n", name);
    for (int j = 4; j > 0; j--)
    {

        if (l == 0)
        {
            char gam[100] = "\n\nEnter number of the game from the next games ";
            for (i = 0; gam[i] != '\0'; i++)
            {
                putchar(gam[i]);

                wait25(1);
            }
            printf(":\n1-puzzle\t\t2-math\t\t3-exit the gmae\n ");
        }
        else
        {

        retu:
            printf("\n\nEnter Number of the Game From the Next Games:\n1-Puzzle\t2-Math\t 3-Exit the Game\n");
        }
        let = 0;
        scanf("%d", &let);
        if (let == 1)
        {
            win_val = 0;
            namber1();
            if (win_val == 1)
            {
                j = j + 1;
            }
            over();
        }
        else if (let == 2)
        {
            win_val = 0;
            namber2();
            if (win_val == 1)
            {
                j = j + 1;
            }

            over();
        }
        else if (let == 3)
        {
            int ex;
            printf("\n\tsure exiting the game?\n\t1-Yes   2-No\n\t  ");
            scanf("%d", &ex);
            if (ex == 1)
            {
                goto end;
            }
            else if (ex == 2)
            {
                system("cls");
                goto retu;
            }
            else
            {
                printf("this is rong number");
                goto retu;
            }
        }

        else
        {
            printf("\nsorry this incorrect number");
        }
        printf("\nyou have %d chance \n\n choose anther number", j - 2);
        l++;
        wait(1);
    }
    printf("\nyou have retshe the end of your chances ");
end:
    printf("\n thanks for sobscribing in my game");
    wait(2);
    system("cls");
    for (int i = 0; i < 18; i++)
    {
        for (int d = 0; d < i; d++)
        {
            printf("\n");
        }

        printf("\t\t\t\t\t          Designed by \n\n\t\t\t\t\t\t Mustafa Asmael\n\n\n\n");
        printf("\t\t\t\t\t          programed by \n\n\t\t\t\t\t\t Mustafa Asmael");
        wait1_2(1);
        system("cls");
    }
    printf("\a");
    return 0;
}

//********************************************************************the first game*******************************************************************************

int namber1()
{
    char num[50] = "Repair your pepar and pen you will need them \n\n";
    for (i = 0; num[i] != '\0'; i++)
    {
        putchar(num[i]);

        wait25(1);
    }

    printf("Are you ready \n ");
    getch();
    char num1[10] = "\rokay ";
    for (i = 0; num1[i] != '\0'; i++)
    {
        putchar(num1[i]);
        wait25(1);
    }
    for (i = 0; name[i] != '\0'; i++)
    {
        putchar(name[i]);

        wait25(1);
    }

    char num2[52] = " this is small puzzle lets see if you can solve it";
    for (i = 0; num2[i] != '\0'; i++)
    {
        putchar(num2[i]);
        wait25(1);
    }

    over();
    char num3[100] = "\n mr.jonsun hase chalange mr.ben that he can guess mr.ben three children ages\n ";
    for (i = 0; num3[i] != '\0'; i++)
    {
        putchar(num3[i]);
        wait25(1);
    }
    printf("mr.ben tells mr.jonsun three clues \n\n");
    getch();
    printf("\r1-the product of the childerns ages is 36 \n");
    getch();
    printf("\r2-the sum of the childern ages is 13 \n");

    getch();
    printf("\r3-the oldest child is plays the piano \n\n");

    getch();
    printf("\rHow old are the three childern? \n\n ");
    wait(2);
    printf("\rthe first childe:");
    scanf("%d", &chil[0]);
    printf("the second childe:");
    scanf("%d", &chil[1]);
    printf("the third childe:");
    scanf("%d", &chil[2]);

    if ((chil[0] == 9) && (chil[1] == 2) && (chil[2] == 2))
    {
        for (i = 0; name[i] != '\0'; i++)
        {
            putchar(name[i]);
            wait25(1);
        }

        char winer[100] = " you are not bad in the end this\'s quite true";
        for (i = 0; winer[i] != '\0'; i++)
        {
            putchar(winer[i]);
            wait25(1);
        }
        over();

        printf("\n i have anther puzzle for you\n ");
        printf("\rI\'m sure this will be as a childern play for you \n");
        over();
        printf("Before Sabbah,Alhamem,Mustafa and Modaser ran a race\n");
        wait(3);
        printf("they made the following predictions \n");
        getch();
        printf("\r1-Sabbah predicted that Alhamem would win \n");
        getch();
        printf("\r2-Alhamem predicted that Modaser would be last\n");
        getch();
        printf("\r3-Mustafa predicted that sabbah would be third\n");
        getch();
        printf("\r4-Modaser predicted that Sabbah\'s predicted would be correct \n");
        getch();
        printf("\rOnly one predictions was true \n");
        getch();
        printf("\rand this was the prediction made by the winner\n\n");
        getch();
        printf("\r in what order did Sabbah,Alhamem,mustafa and modaser finish the race?\n");
        printf("in smale leter\n\n");
        getch();
        printf("\r the winner: ");
        scanf("%s", &ordnu1);
        printf("the seconde: ");
        scanf("%s", &ordnu2);
        printf("the third: ");
        scanf("%s", &ordnu3);
        printf("the fourth: ");
        scanf("%s", &ordnu4);
        if ((strcmp(ordnu1, "mustafa") == 0) && (strcmp(ordnu2, "modaser") == 0) && (strcmp(ordnu3, "sabbah") == 0) && (strcmp(ordnu4, "alhamem") == 0))
        {
            printf("i ware sure you will do it");
            win_val = 1;
            return 0;
        }
        else
        {
            printf("sorry i think you tird yourselef");
            return 1;
        }
    }
    else if ((chil[0] == 9) && (chil[1] == 2))
    {
        printf("you have been very close but this is wrong answer");
    }
    else
    {

        printf("well this is completely wrong ");
    }

    return 0;
}

//****************************************************** the second game********************************************************************************************

int namber2()
{
    printf("\n4*11=");
    scanf("%d", &anser[0]);
    if (anser[0] == 44)
    {
        printf("correct anser\n now lets make it a bit harder\n");
        printf("5*4+6*3=");
        scanf("%d", &anser[1]);
        if (anser[1] == 38)
        {
            printf("waaaw you are not bad in the end ");
            over();
            char waaw[50] = "\n   But i will be seriuse weth you from now on\n\n";
            for (n = 0; waaw[n] != '\0'; n++)
            {
                putchar(waaw[n]);
                wait25(1);
            }
            getch();
            printf("if\t 2+3=10\t");
            wait(1);
            printf("7+2=63\n");
            wait(1);
            printf("\t6+5=66");
            wait(1);
            printf("\t8+4=94\n\n");
            wait(3);
            printf("9+7=");
            scanf("%d", &anser[2]);
            if (anser[2] == 144)
            {
                printf("waaaaw just waaw i did not see that coming");
                win_val = 1;
            }
            else
            {
                printf("\nyou cut a long wae But sorre %s answer is not true ", name);
            }
        }
        else
        {
            printf("\nsorre my friend answer is not true ");
        }
    }
    else
    {
        printf("\nsorre my friend answer is not true ");
    }
    return 0;
}
