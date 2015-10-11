#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
int check1box(int soduku[6][6]);
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
										//checking of 3x3 box
check1box(soduku);
return 0;
}

void gotoxy(int row,int column)
{
    COORD coord;
    coord.X=row;
    coord.Y=column;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int check1box(int soduku[6][6])
{
    cout<<"in check 1st box";
    int a[9]={1,2,3,4,5,6,7,8,9};
    int i,j,l;
    int sze=9,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(l=0;l<sze;l++)
            {
                if(a[l]==soduku[i][j])
                {
                    fore(k=j;k<8;k++)
                    {
                    a[j]=a[l+1];
                    }
                    sze--;
                    break;
                }
            }
        }
    }
    if(sze==0)
            {
                cout<<"row 1 checked its ok";
            }
            else
            {
                cout<<"b0x 1 not arranged";
            }
return 0;
}





