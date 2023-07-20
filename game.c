#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char comp)
{
    // ss,ww,gg,sw,ws,sg,gs,gw,wg
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}
void main()
{
    char you, comp;
    srand(time(0));
    comp = rand() % 100 + 1; // to generate a random number
    if (comp == 0 && comp < 33)
    {
        comp = 's';
    }
    else if (comp > 33 && comp < 66)
    {
        comp = 'g';
    }
    else
    {
        comp = 'w';
    }
    printf("choose any one of them:- S(snake),G(gun)and W(water)\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game draw\n");
    }
    else if (result == 1)
    {
        printf("You Win\n");
    }
    else
    {
        printf("You Lose\n");
    }
    printf("you choose %c and computer choose %c", you, comp);
}