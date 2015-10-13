#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
int checkbox(int soduku[6][6],int,int,int,int);
void printarray(int a[],int sze);

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
    cout<<"enter element of matrix continuously and enter 0 for non-determined value\n";
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
    cout<<"\n\n\t\t\t\t\t\t   !!!Message!!!\n\t\t\tIf entered soduku is correct press 1 and If incorrect press 2 \n\t\t\t\t\t\t\t  ";
    cin>>x;
if(x==2)
{
   system("cls");
    goto case1;
}
										//checking of 3x3 box
checkbox(soduku,0,2,0,3); //checking first box
checkbox(soduku,0,2,3,6); //checking second box
checkbox(soduku,2,4,0,3); //checking third box
checkbox(soduku,2,4,3,6); //checking fourth box
checkbox(soduku,4,6,0,3); //checking fifth box
checkbox(soduku,4,6,3,6); //checking sixth box
return 0;
}

void gotoxy(int row,int column)
{
    COORD coord;
    coord.X=row;
    coord.Y=column;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int checkbox(int soduku[6][6],int m,int n,int o,int p)
{
    int a[6]={1,2,3,4,5,6};

    int i,j,k,l;
    int sze=6;
    for(i=m;i<n;i++)
    {
        for(j=o;j<p;j++)
        {
            for(k=0;k<sze;k++)
            {
                if(a[k]==soduku[i][j])
                {
                    for(l=k;l<5;l++)
                    {
                    a[l]=a[l+1];
                    }
                    sze--;
                    break;
                }
            }
        }
    }
    if(sze==0)
            {
                cout<<endl<<"box is checked its arranged"<<endl;
            }
            else
            {
                cout<<endl<<"b0x is checked and its not arranged"<<endl;
            }
return 0;
}
void printarray(int a[],int sze)
{
    cout<<endl<<"printing a[]"<<endl;
    int i;
    for(i=0;i<sze;i++)
    {
        cout<<a[i]<<" ";
    }
}






