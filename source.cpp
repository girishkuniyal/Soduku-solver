#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
                            /*starting of main function*/
int main()
{
int soduku[6][6];
int i,j; //for loops;
int x,y; //for cursor position on screen;
case1:   //label for goto syntax if user entered wrong input then start with this label;
{
    x=0;
    y=1;
    gotoxy(0,0);
    cout<<"enter element of matrix continiously and enter 0 for non-determined value\n";
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            gotoxy(x,y);
            cin>>soduku[i][j];
            x=x+3;
        }
        x=0;
        y++;
    }
    x=10;
    y=12;
    cout<<"\n\t\t\t\t\t  Your entered soduku matrix is:\n";
    for(i=0;i<6;i++)
    {
        gotoxy(42,y);
        for(j=0;j<6;j++)
        {

            cout<<"| "<<soduku[i][j]<<" |";

        }
    y++;
    }
}
    cout<<"\n\n\t\t\t\t\t\t   !!!Message!!!\n\t\t\tIf entered soduku is correct press 1 and If incorrect press 2 \n\t\t\t\t\t\t\t";
    cin>>x;
if(x==2)
{
   system("cls");
    goto case1;
}

return 0;
}

void gotoxy(int row,int column)
{
    COORD coord;
    coord.X=row;
    coord.Y=column;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
