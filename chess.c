#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct question
{
    int a[8][8];
}p1[3],p2[2],p3[2];

void display(struct question p)
{
    char s[2]="";
    printf("\n\n\n");
            for(int i=0;i<8;i++)
            {
                   for(int t=0;t<=3;t++)
                    {
                        switch(t)
                        {
                            case 0: printf("\t\t\t\t\t\t   ---------------------------------------------------------\n");break;
                            case 2: {
                                        printf("\t\t\t\t\t\t %d |",8-i);
                                        for(int j=0;j<8;j++)
                                        {
                                            int k=p.a[i][j];
                                            if(k>=97)
                                            {
                                                s[0]='B';
                                                s[1]=k;
                                                s[1]=toupper(s[1]);
                                                s[2]='\0';
                                                printf("  %s  |",s);
                                            }
                                            else if(k>=65)
                                            {
                                                s[0]='W';
                                                s[1]=k;
                                                s[2]='\0';
                                                printf("  %s  |",s);
                                            }
                                            else
                                                printf("      |");


                                        }

                                            printf("\n");
                                            break;
                                    }
                            case 1:
                            case 3: printf("\t\t\t\t\t\t   |      |      |      |      |      |      |      |      |");
                                    if(t!=3)
                                        printf("\n");
                                    break;
                        }
                    }
                    printf("\n");
            }
            printf("\t\t\t\t\t\t   ---------------------------------------------------------\n");
            printf("\t\t\t\t\t\t   |   a  |   b  |   c  |   d  |   e  |   f  |   g  |   h  |\n");
}
void instruction()
{
    system("cls");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tHere are a few instructions: ");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tSince this is not a GUI,  the chess pieces are represented the following way:  ");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tWX- WHITE KING\t\t\t\t\t\t\t  BX-BLACK KING");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tWQ- WHITE QUEEN\t\t\t\t\t\t\t BX-BLACK QUEEN");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tWR- WHITE ROOK\t\t\t\t\t\t\t  BX-BLACK ROOK");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tWB- WHITE BISHOP\t\t\t\t\t\tBX-BLACK BISHOP ");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tWK- WHITE KNIGHT\t\t\t\t\t\tBK-BLACK KNIGHT ");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tWP- WHITE PAWN\t\t\t\t\t\t\t  BX-BLACK PAWN ");
    Sleep(6000);
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tHERE WE GO! ");
    Sleep(4000);
}
int main()
{
    printf(("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t  WELCOME TO THE CHESS PUZZLES CREATED BY\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  VIKHYAT VINOD KUMAR\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t  P.M. VARUNA LINGAM\n\n\n\n\t\t\t\t\t\t"));
    Sleep(10000);
    int choice;
    for(;;)
    {
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t For an Easy puzzle press 1\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t For a intermediate puzzle press 2\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t For a hard puzzle press 3\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t To exit the world of chess press 4");
        printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:easy_puzzle1();break;
                case 2:medium_puzzle1();break;
                case 3:hard_puzzle1();break;
                case 4:exit(0);
                default: printf("\n\n\n\n\t\t\t\t\t\t Enter appropriate number");
        }
    }
}
void medium_puzzle1()
{
    printf("\n\n\n\n\t\t\t\t\t\t I am medium puzzle");
}
void easy_puzzle1()
{
    instruction();
    system("cls");
    char in[5];
    for(int x=0;x<8;x++)
        for(int y=0;y<8;y++)
            p1[0].a[x][y]=0;

    p1[0].a[0][4]=114;
    p1[0].a[0][6]=120;
    p1[0].a[1][0]=112;
    p1[0].a[1][2]=98;
    p1[0].a[1][5]=112;
    p1[0].a[2][5]=107;
    p1[0].a[2][7]=81;
    p1[0].a[3][1]=82;
    p1[0].a[3][4]=113;
    p1[0].a[4][0]=107;
    p1[0].a[4][2]=80;
    p1[0].a[4][3]=112;
    p1[0].a[5][0]=80;
    p1[0].a[5][3]=80;
    p1[0].a[6][3]=66;
    p1[0].a[6][4]=0;
    p1[0].a[6][5]=80;
    p1[0].a[6][6]=80;
    p1[0].a[7][5]=88;
    display(p1[0]);
    printf("\n\n\n\n\t\t\t\t\t\t  Black moves Qe7. Your turn! ");
    Sleep(10000);
    hello:system("cls");

    p1[0].a[3][4]=0;
    p1[0].a[1][4]=113;
    display(p1[0]);
    printf("\n\n\n\n\t\t\t\t\t\t  Awaiting your move!: ");
    scanf("%s",in);
    if(strcmp(in,"rg5")==0 || strcmp(in,"Rg5")==0  )
    {
        system("cls");

        p1[0].a[3][1]=0;
        p1[0].a[3][6]=82;
        display(p1[0]);
        printf("\n\n\n\n\t\t\t\t\t\t  Congratulations! You solved it!");
        Sleep(6000);
        return;
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t\t\t  Oh no! Retry to find the best move!\n");
        Sleep(6000);
        goto hello;
    }
}
void hard_puzzle1()
{
    instruction();
    system("cls");
    char in[5];
    for(int x=0;x<8;x++)
        for(int y=0;y<8;y++)
            p1[0].a[x][y]=0;

    p3[0].a[0][0]=114;
    p3[0].a[0][2]=98;
    p3[0].a[0][3]=113;
    p3[0].a[0][5]=98;
    p3[0].a[0][6]=120;
    p3[0].a[0][7]=114;
    p3[0].a[1][0]=112;
    p3[0].a[1][1]=112;
    p3[0].a[1][2]=112;
    p3[0].a[1][3]=112;
    p3[0].a[1][6]=112;
    p3[0].a[1][7]=112;
    p3[0].a[3][4]=80;
    p3[0].a[4][1]=107;
    p3[0].a[4][3]=66;
    p3[0].a[4][4]=80;
    p3[0].a[5][5]=81;
    p3[0].a[6][0]=p3[0].a[6][1]=p3[0].a[6][2]=p3[0].a[6][5]=p3[0].a[6][6]=p3[0].a[6][7]=80;
    p3[0].a[7][0]=82;
    p3[0].a[7][1]=75;
    p3[0].a[7][4]=88;
    p3[0].a[7][7]=82;
    check1:
    system("cls");
    display(p3[0]);
    printf("\n\n\n\n\t\t\t\t\t\t  You play as White! Awaiting your move ");
    scanf("%s",in);


    if(strcmp(in,"qb3")==0 || strcmp(in,"Qb3")==0|| strcmp(in,"QB3")==0|| strcmp(in,"qB3")==0  )
    {
        system("cls");
        p3[0].a[5][5]=0;
        p3[0].a[5][1]=81;
        display(p3[0]);
        printf("\n\n\n\n\t\t\t\t\t\t  Thinking.....");
        Sleep(6000);
        system("cls");
        p3[0].a[1][3]=0;
        p3[0].a[3][3]=112;
        check2:
        system("cls");
        display(p3[0]);
        printf("\n\n\n\n\t\t\t\t\t\t  Black moves d5");
        printf("\n\n\n\n\t\t\t\t\t\t  Your turn! Awaiting your move ");
        scanf("%s",in);
        if(strcmp(in,"xd6")==0 || strcmp(in,"XD6")==0|| strcmp(in,"xD6")==0|| strcmp(in,"Xd6")==0  )
        {
            system("cls");

            p3[0].a[3][4]=0;
            p3[0].a[3][3]=0;
            p3[0].a[2][3]=80;
            display(p3[0]);
            printf("\n\n\n\n\t\t\t\t\t\t  Thinking.....");
            Sleep(6000);
            system("cls");
            p3[0].a[4][1]=0;
            p3[0].a[3][3]=107;
            check3:
            system("cls");
            display(p3[0]);
            printf("\n\n\n\n\t\t\t\t\t\t  Black moves Nd5");
            printf("\n\n\n\n\t\t\t\t\t\t  Your turn! Awaiting your move ");
            scanf("%s",in);
            if(strcmp(in,"Qxd5")==0 || strcmp(in,"QXD5")==0|| strcmp(in,"QxD5")==0 || strcmp(in,"QXd5")==0 || strcmp(in,"qXd5")==0|| strcmp(in,"qxd5")==0 || strcmp(in,"Qxd5")==0 )
            {
                system("cls");

                p3[0].a[5][1]=0;
                p3[0].a[3][3]=81;
                display(p3[0]);
                printf("\n\n\n\n\t\t\t\t\t\t  Congratulations! You solved it!");
                Sleep(6000);
                return;
            }
            else
            {
                printf("\n\n\n\n\t\t\t\t\t\t  Oh no! Retry to find the best move!\n");
                Sleep(6000);
                goto check3;
            }
        }
        else
        {
            printf("\n\n\n\n\t\t\t\t\t\t  Oh no! Retry to find the best move!\n");
            Sleep(6000);
            goto check2;
        }
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t\t\t  Oh no! Retry to find the best move!\n");
        Sleep(6000);
        goto check1;
    }
}

