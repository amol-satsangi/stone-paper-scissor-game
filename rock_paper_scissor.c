#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()

{   
    int a; // for computer
    int b; // for player
    static int c = 0; // for computer's point
    static int d = 0; // for player's point
    char name[15]; // for plyers name 
    
    
    printf("Enter your name:");
    gets(name);
    printf("Hello %s\nlet's start the game...\n", name );
    printf("There will be three rounds in a game, who will win more round will win the game\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter 0:for stone\nEnter 1:for paper\nEnter 2:for cissor\n");
        scanf("%d", &b);
        printf("You entered: %d\n", b);
        a = random_number();
        printf("Computer entered: %d\n", a);
        switch (b)
        {
        case 0:
            printf("You:Stone\n");

            switch (a)
            {
            case 0:
                printf("Computer:Stone\n");
                break;
            case 1:
                printf("Computer:Paper\n");
                c++;
                break;
            case 2:
                printf("Computer:Cissor\n");
                d++;
                break;
            }
            break;
        case 1:
            printf("You:Paper\n");

            switch (a)
            {
            case 0:
                printf("Computer:Stone\n");
                d++;
                break;
            case 1:
                printf("Computer:Paper\n");
                break;
            case 2:
                printf("Computer:Cissor\n");
                c++;
                break;
            }
            break;
        case 2:
            printf("You:Cissor\n");

            switch (a)
            {
            case 0:
                printf("Computer:Stone\n");
                c++;
                break;
            case 1:
                printf("Computer:Paper\n");
                d++;
                break;
            case 2:
                printf("Computer:Cissor\n");
                break;
            }
            break;
        }
        printf("Score:\n");
        printf("You: %d\n", d);
        printf("Computer: %d\n\n\n", c);
    }
    if (d>c)
    {
        printf("You win the game.\n");
    }
    else if (c>d)
    {
        printf("Computer win the game\n");
    }
    else if (c == d)
    {
        printf("Match tie\n");
    }
    return 0;
}