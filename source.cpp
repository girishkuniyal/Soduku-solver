#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
int check1box(int soduku[6][6]);
int check2box(int soduku[6][6]);
int check3box(int soduku[6][6]);
int check4box(int soduku[6][6]);
int check5box(int soduku[6][6]);
int check6box(int soduku[6][6]);
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
    cout<<"\n\n\t\t\t\t\t\t   !!!Message!!!\n\t\t\tIf entered soduku is correct press 1 and If incorrect press 2 \n\t\t\t\t\t\t\t  ";
    cin>>x;
if(x==2)
{
   system("cls");
    goto case1;
}
										//checking of 3x3 box
check1box(soduku);
check2box(soduku);
check3box(soduku);
check4box(soduku);
check5box(soduku);
check6box(soduku);
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
    int a[6]={1,2,3,4,5,6};

    int i,j,k,l;
    int sze=6;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
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
                cout<<endl<<"box 1 checked its ok"<<endl;
            }
            else
            {
                cout<<endl<<"b0x 1 not arranged"<<endl;
            }
return 0;
}
int check2box(int soduku[6][6])
{
    int a[6]={1,2,3,4,5,6};

    int i,j,k,l;
    int sze=6;
    for(i=0;i<2;i++)
    {
        for(j=3;j<6;j++)
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
                cout<<endl<<"box 2 checked its ok"<<endl;
            }
            else
            {
                cout<<endl<<"b0x 2 not arranged"<<endl;
            }
return 0;
}
int check3box(int soduku[6][6])
{
    int a[6]={1,2,3,4,5,6};

    int i,j,k,l;
    int sze=6;
    for(i=2;i<4;i++)
    {
        for(j=0;j<3;j++)
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
                cout<<endl<<"box 3 checked its ok"<<endl;
            }
            else
            {
                cout<<endl<<"b0x 3 not arranged"<<endl;
            }
return 0;
}
int check4box(int soduku[6][6])
{
    int a[6]={1,2,3,4,5,6};

    int i,j,k,l;
    int sze=6;
    for(i=2;i<4;i++)
    {
        for(j=3;j<6;j++)
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
                cout<<endl<<"box 4 checked its ok"<<endl;
            }
            else
            {
                cout<<endl<<"b0x 4 not arranged"<<endl;
            }
return 0;
}
int check5box(int soduku[6][6])
{
    int a[6]={1,2,3,4,5,6};

    int i,j,k,l;
    int sze=6;
    for(i=4;i<6;i++)
    {
        for(j=0;j<3;j++)
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
                cout<<endl<<"box 5 checked its ok"<<endl;
            }
            else
            {
                cout<<endl<<"b0x 5 not arranged"<<endl;
            }
return 0;
}
int check6box(int soduku[6][6])
{
    int a[6]={1,2,3,4,5,6};

    int i,j,k,l;
    int sze=6;
    for(i=4;i<6;i++)
    {
        for(j=3;j<6;j++)
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
                cout<<endl<<"box 6 checked its ok"<<endl;
            }
            else
            {
                cout<<endl<<"b0x 6 not arranged"<<endl;
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






