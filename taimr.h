int pan;
void wait(int sec)
{
    pan = clock() / 1000;
    pan = pan + sec;
    int secand;
    for (;;)
    {
        secand = clock() / 1000;

        if (secand == pan)
            break;
    }
}
void wait1_2(int sec)
{

    int secand;
    pan = clock() / 500;
    pan = pan + sec;
    for (;;)
    {
        secand = clock() / 500;

        if (secand == pan)
            break;
    }
}
void wait5(int sec)
{
    int secand;
    pan = clock() / 250;
    pan = pan + sec;
    for (;;)
    {
        secand = clock() / 250;

        if (secand == pan)
            break;
    }
}
void wait25(int sec)
{

    int secand;
    pan = clock() / 100;
    pan = pan + sec;
    for (;;)
    {
        secand = clock() / 100;

        if (secand == pan)
            break;
    }
}

int over()
{

    getch();
    system("cls");
    return 0;
}