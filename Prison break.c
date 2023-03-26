#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int x=1, y=1;
int r=13, c=30;
char name[50];


int printwellcome()
{
printf("\n\n\n");
printf("                   ###         ### ############# ###        ###           #########     #######      #####     ##### #############\n");
printf("                   ###   ###   ### ############# ###        ###          ###########   ##########    ######   ###### #############\n");
printf("                   ###   ###   ### ###           ###        ###          ####    ###  #####  #####   ### ### ### ### ###\n");
printf("                   ###   ###   ### ###           ###        ###          ###      ## ####      ####  ###  #####  ### ###\n");
printf("                   ###   ###   ### ###########   ###        ###          ###         ###        ###  ###   ###   ### ###########\n");
printf("                   ###   ###   ### ###########   ###        ###          ###         ###        ###  ###         ### ###########\n");
printf("                   ###   ###   ### ###           ###        ###          ###      ## ####      ####  ###         ### ###\n");
printf("                   ###   ###   ### ###           ###        ###          ####    ###  #####  #####   ###         ### ###\n");
printf("                   ############### ############# ########## ############ ###########   ##########    ###         ### #############\n");
printf("                   ############### ############# ########## ############  #########      ######      ###         ### #############\n");
printf("\n");
printf("                                                               *******************    *******\n");
printf("                                                               *******************   **********\n");
printf("                                                                      ****          *****  *****\n");
printf("                                                                      ****         ****      ****\n");
printf("                                                                      ****         ***        ***\n");
printf("                                                                      ****         ***        ***\n");
printf("                                                                      ****         ****      ****\n");
printf("                                                                      ****          *****  *****\n");
printf("                                                                      ****           **********\n");
printf("                                                                      ****             ******\n");
printf("\n");
printf("    ########    ########     ######   #########      #####      #####      #######     ##########   ########     ###########   #########   ###     ###\n");
printf("    #**###**#   #**###**#     #**#   #***#*****#    #******#    #***#       #***#      #*********#  #*#***#*#    #*#*#*#*#*#  #*********#  #*#    #*#\n");
printf("    #*#   #**#  #*#   #**#    #**#   #**#          #***##***#   #****#       #*#       #*######**#  #*#    #*#   #*#          #**#####**#  #*#   #*#\n");
printf("    #*#    #*#  #*#   #**#    #**#   #**#          #**#  #**#   #*# #*#      #*#       #*#     #*#  #*#    #*#   #*#          #*#     #*#  #*#  #*#\n");
printf("    #*#   #**#  #*#   #**#    #**#   #**#          #*#    #*#   #*#  #*#     #*#       #*#    #*#   #*#   #*#    #*######     #*#     #*#  #*# #*#\n");
printf("    #**###**#   #*####**#     #**#   #***#*****#   #*#    #*#   #*#   #*#    #*#       #*#####*#    #*#####*#    #******#     #*#*#*#*#*#  #*###\n");
printf("    #*#####     #*#*#*#*      #**#   ########**#   #*#    #*#   #*#    #*#   #*#       #*#    #*#   #*#*#*#      #*######     #*#*#*#*#*#  #*# #*#\n");
printf("    #*#         #*#  #**#     #**#           #*#   #**#  #**#   #*#     #*#  #*#       #*#     #*#  #*#  #*#     #*#          #*#     #*#  #*#  #*#\n");
printf("    #*#         #*#   #**#    #**#           #*#   #***##***#   #*#      #*# #*#       #*######**#  #*#   #*#    #*#          #*#     #*#  #*#   #*#\n");
printf("    #*#         #*#    #**#   #**#   #******#**#    #******#   #***#      #****#       #*#*#*#*#*#  #*#    #*#   #*#*#*#*#*#  #*#     #*#  #*#    #*#\n");
printf("    ###         ###    ####  ######   #########      ######   #######      #####       ##########   ###    #*#   ###########  ###     ###  ###     ###\n");
printf("\n\n\n");
printf("Instruction -> \n");
printf("press [W] to Move Up\n");
printf("press [S] to Move Down\n");
printf("press [A] to Move Left\n");
printf("press [D] to Move Right\n");
printf("\n\n");
}
char maze1[13][30]={{'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+'},
                    {'|','0','|','#','|','0','0','0','0','0','0','0','0','0','0','0','0','|','#','#','#','#','|','0','0','0','0','0','0','|'},
                    {'|','0','|','#','|','0','+','-','-','+','0','+','-','-','-','+','0','|','#','#','#','#','|','0','+','-','-','+','0','|'},
                    {'|','0','|','#','|','0','+','-','-','+','0','|','#','#','#','|','-','|','#','#','#','#','|','0','|','#','#','|','0','|'},
                    {'|','0','+','-','+','0','0','0','0','0','0','|','#','#','#','|','0','+','-','-','-','-','+','0','+','+','#','|','0','|'},
                    {'|','0','0','0','0','0','+','-','+','0','0','+','-','-','-','+','0','0','0','0','0','0','0','0','0','|','#','|','0','|'},
                    {'|','0','+','-','+','0','|','#','|','0','0','0','0','0','+','-','-','-','-','-','-','-','-','+','0','|','#','|','0','|'},
                    {'|','0','|','#','|','0','|','#','|','0','0','+','+','0','+','-','-','-','-','-','-','-','-','+','0','|','#','|','0','|'},
                    {'|','0','|','#','|','0','+','-','+','0','0','|','|','0','0','0','0','0','0','0','0','0','0','0','0','+','-','+','0','|'},
                    {'|','0','|','#','|','0','0','0','0','0','0','|','|','0','+','-','-','+','0','+','-','-','-','-','+','0','0','0','0','|'},
                    {'|','0','+','-','+','-','-','-','-','-','-','|','|','0','+','-','+','|','0','|','#','#','#','#','|','0','-','-','-','|'},
                    {'|','0','0','0','0','0','0','0','0','0','0','|','|','0','0','0','|','|','0','|','#','#','#','#','|','0','0','0','0','#'},
                    {'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+'}};

char maze2 [13][30]={{'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','+'},
                    {'|','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','|','0','|','0','|','|'},
                    {'|','0','+','-','-','#','#','0','0','0','|','#','#','#','0','|','0','-','-','-','0','0','|','0','|','0','|','0','|','|'},
                    {'|','0','|','0','0','0','0','0','|','0','|','-','-','-','-','|','0','+','+','+','0','0','0','0','0','0','0','0','|','|'},
                    {'|','0','|','#','#','#','#','0','#','0','0','0','|','0','0','0','0','0','0','0','+','0','|','0','|','0','|','0','|','|'},
                    {'|','0','-','-','-','-','-','0','-','-','-','0','|','0','|','-','-','0','-','-','0','0','#','0','#','0','|','0','|','|'},
                    {'|','0','0','0','|','0','0','0','0','0','0','+','|','0','|','0','0','0','0','0','|','0','|','0','|','0','|','0','|','|'},
                    {'|','-','-','0','|','-','-','-','-','-','-','|','|','0','-','-','-','-','|','0','|','0','|','0','|','0','|','0','|','|'},
                    {'|','#','#','0','|','0','0','0','0','0','0','|','0','0','0','0','|','0','|','0','|','0','|','0','|','0','|','0','|','|'},
                    {'|','0','0','0','0','0','-','#','|','#','-','-','-','-','-','0','|','0','|','0','0','0','|','0','0','0','|','0','|','|'},
                    {'|','0','#','#','#','#','#','#','|','#','0','0','0','0','0','0','|','0','|','0','|','0','|','0','|','0','|','0','|','|'},
                    {'|','0','0','0','0','0','0','0','0','0','0','0','0','0','#','0','0','+','|','0','0','0','#','0','|','0','|','0','0','#'},
                    {'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'}};

void printmaze(char maze[13][30])
{
    r=13, c=30;
    int i, j;

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(maze[i][j]=='|'){
              //  system("COLOR 01");  //Blue Color
                printf("|");
            }
            else if (maze[i][j]=='-')
            {
             //   system("COLOR 04");  //Red Color
                printf("-");
            }
             else if (maze[i][j]=='+')
            {
             //   system("COLOR 02");   //Green Color
                printf("+");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void gotoxy()   //25x80
{
    COORD CRD;   //CRD --> data type
    CRD.X=x;
    CRD.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CRD );
}

void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void showcursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = TRUE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void move(char ch,char maze[13][30])
{
    if(ch=='w'){
        if(maze[r-1][c]=='0'){
            gotoxy();
            printf(" ");
            y--;
            gotoxy();
            printf("*");
        }
    }
    if(ch=='a'){
        if(maze[r][c-1]=='0'){
            gotoxy();
            printf(" ");
            x--;
            gotoxy();
            printf("*");
        }
    }
    if(ch=='s'){
        if(maze[r+1][c]=='0'){
            gotoxy();
            printf(" ");
            y++;
            gotoxy();
            printf("*");
            }
    }
    if(ch=='d'){
        if(maze[r][c+1]=='0'){
            gotoxy();
            printf(" ");
            x++;
            gotoxy();
            printf("*");
        }
    }

    r= y;
    c= x;
}

int main()
{
    char ch;
    printwellcome();
    printf("Press SPACE to start\n\nPress TAB to exit\n\n");
    while(1)
    {
        ch=getch();
        if(ch==9)
        {
            break;
        }
        else
        {
            if(ch==32)
            {
                system("cls");
                printf("Enter Player Name : ");
                gets(name);
                system("cls");
                printmaze(maze1);
                hidecursor();

                gotoxy();
                printf("*");

                while(1)
                {
                    if((r==11&&c==28)||(ch==27))
                    {
                        system("cls");
                        break;
                    }

                    ch=getch();

                    move(ch,maze1);

                }

                if(r==11&&c==28)
                {
                    printf("Well Done %s!!\n\n You Escape \n\n Press [E] Key To Exit\n\n Press [N] Key to play next level",name);
                    showcursor();
                    while(1)
                    {
                        ch=getch();
                        if(ch==69 || ch == 101)
                        {
                            break;
                        }
                        else
                        {
                            if (ch == 78 || ch == 110)
                            {
                                system("cls");
                                x=1,y=1;
                                printmaze(maze2);
                                hidecursor();

                                gotoxy();
                                printf("*");

                                while(1)
                                {
                                    ch=getch();

                                    move(ch,maze2);

                                    if((r==11&&c==28)||(ch==32))
                                    {
                                        system("cls");
                                        break;
                                    }



                                }

                                if(r==11&&c==28)
                                {
                                    printf("      Well Done %s!!!\n\n   You Escape Again !!\n\nPress esc key to exit",name);
                                    showcursor();
                                    while(1)
                                    {
                                        ch=getch();
                                        if(ch==27)
                                        {
                                            break;
                                        }
                                    }break;
                                }break;
                            }break;
                        }break;
                    }break;
                }break;
            }break;
        }break;
    }
    system("cls");
    printf("THANKS FOR PLAYING !!\n\n");
    printf("ENJOY YOUR DAY\n");


}

/*
int main()
{
    system("COLOR 04");
    printmaze(maze1);
    hidecursor();

    char ch;
    gotoxy();
    printf("X");

    while(1)
    {
        if((r==11&&c==28)||(ch==27))
        {
            system("cls");
            break;
        }

        ch=getch();

        move(ch,maze1);

    }

    if(r==11&&c==28)
    {
        printf("Maze solved!\n\nPress esc key to Play Next level");
        showcursor();
        while(1)
        {
            ch=getch();
            if(ch==27)
            {
                system("cls");
                x=1,y=1;
                printmaze(maze2);
                hidecursor();

                gotoxy();
                printf("X");

                while(1)
                {
                    if((r==11&&c==28)||(ch==32))
                    {
                        system("cls");
                        break;
                    }

                    ch=getch();

                    move(ch,maze2);

                }

                if(r==11&&c==28)
                {
                    printf("Maze solved!\n\nPress esc key to exit");
                    showcursor();
                    while(1)
                    {
                        ch=getch();
                        if(ch==32)
                        {
                            break;
                        }
                    }
                }
            }
        }
    }




    return 0;
}*/
