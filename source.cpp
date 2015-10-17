#include<iostream>
#include<windows.h>
using namespace std;
//              functions are defined below main in same order;
void gotoxy(int,int);
int checkbox(int soduku[6][6],int,int,int,int);//first int for initializing i second for condition check for i;
void printarray(int a[],int sze);
void checkrow(int soduku[6][6],int);//where row starts with zero;
void checkcol(int soduku[6][6],int);//where column starts with zero;
void findzeroposition(int soduku[6][6]);
int selectbestelement(int soduku[6][6]);

                            /*starting of main function*/
int positionofzero[36][2],p=0;//here k is for how many elements is zero ;
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
    cout<<"\t******Enter element of matrix continuously and enter 0 for non-determined value******\n";
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
for(i=0;i<6;i++) //loop for checking row
{
    checkrow(soduku,i);
}
for(i=0;i<6;i++) //loop for checking row
{
    checkcol(soduku,i);
}
findzeroposition(soduku);
selectbestelement(soduku);
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
    if(sze!=0)
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
void checkrow(int soduku[6][6],int x)
{
    int a[6]={1,2,3,4,5,6};
    int i,j,k;
    int sze=6;
    for(i=0;i<6;i++)
    {
        for(j=0;j<sze;j++)
        {
            if(soduku[x][i]==a[j])
            {
                for(k=j;k<sze;k++)
                {
                    a[k]=a[k+1];
                }
                sze--;
            }
        }
    }
    if(sze!=0)
    {
        cout<<endl<<"row "<<x+1<<" is not arranged"<<endl;
    }

}
void checkcol(int soduku[6][6],int y)
{
    int a[6]={1,2,3,4,5,6};
    int i,j,k;
    int sze=6;
    for(i=0;i<6;i++)
    {
        for(j=0;j<sze;j++)
        {
            if(soduku[i][y]==a[j])
            {
                for(k=j;k<sze;k++)
                {
                    a[k]=a[k+1];
                }
                sze--;
            }
        }
    }
    if(sze!=0)
    {
        cout<<endl<<"column "<<y+1<<" is not arranged"<<endl;
    }
}

void findzeroposition(int soduku[6][6])
{
int f=0;//for handling global variable;
for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        if(soduku[i][j]==0)
        {
            positionofzero[p][f]=i;
            f++;
            positionofzero[p][f]=j;
            p++;
            f=0;
        }
    }
}
cout<<endl<<"\t\t\t\tThe number of zeros/blanks is :"<<p<<endl;
}
int selectbestelement(int soduku[6][6])
{
    //box arrangement is such as below:
    /*  1   2
        3   4
        5   6      */
    int einbox1=0,einbox2=0,einbox3=0,einbox4=0,einbox5=0,einbox6=0;
    int j=0;
    for(int i=0;i<p;i++)
    {
            if(positionofzero[i][j]==0||positionofzero[i][j]==1)
            {
                j++;
                if(positionofzero[i][j]==0||positionofzero[i][j]==1||positionofzero[i][j]==2)
                {
                    einbox1++;
                }
                else if(positionofzero[i][j]==3||positionofzero[i][j]==4||positionofzero[i][j]==5)
                {
                    einbox2++;
                }
            j=0;
            }
            else if(positionofzero[i][j]==2||positionofzero[i][j]==3)
            {
                j++;
                if(positionofzero[i][j]==0||positionofzero[i][j]==1||positionofzero[i][j]==2)
                {
                    einbox3++;
                }
                else if(positionofzero[i][j]==3||positionofzero[i][j]==4||positionofzero[i][j]==5)
                {
                    einbox4++;
                }

            j=0;
            }
            else if(positionofzero[i][j]==4||positionofzero[i][j]==5)
            {
                j++;
                if(positionofzero[i][j]==0||positionofzero[i][j]==1||positionofzero[i][j]==2)
                {
                    einbox5++;
                }
                else if(positionofzero[i][j]==3||positionofzero[i][j]==4||positionofzero[i][j]==5)
                {
                    einbox6++;
                }
            j=0;
            }
    }
            cout<<"element in box1 "<<einbox1<<endl;
            cout<<"element in box2 "<<einbox2<<endl;
            cout<<"element in box3 "<<einbox3<<endl;
            cout<<"element in box4 "<<einbox4<<endl;
            cout<<"element in box5 "<<einbox5<<endl;
            cout<<"element in box6 "<<einbox6<<endl;
                                //try to choose best box
            if(einbox1<=einbox2&&einbox1<=einbox3&&einbox1<=einbox4&&einbox1<=einbox5&&einbox1<=einbox6)
            {
                cout<<"einbox1 is smallest"<<endl;
            }
            else if(einbox2<=einbox1&&einbox2<=einbox3&&einbox2<=einbox4&&einbox2<=einbox5&&einbox2<=einbox6)
            {
                cout<<"einbox2 is smallest"<<endl;
            }
            else if(einbox3<=einbox2&&einbox3<=einbox1&&einbox3<=einbox4&&einbox3<=einbox5&&einbox3<=einbox6)
            {
                cout<<"einbox3 is smallest"<<endl;
            }
            else if(einbox4<=einbox1&&einbox4<=einbox2&&einbox4<=einbox3&&einbox4<=einbox5&&einbox4<=einbox6)
            {
                cout<<"einbox4 is smallest"<<endl;
            }
            else if(einbox5<=einbox2&&einbox5<=einbox3&&einbox5<=einbox4&&einbox5<=einbox1&&einbox1<=einbox6)
            {
                cout<<"einbox5 is smallest"<<endl;
            }
            else if(einbox6<=einbox2&&einbox6<=einbox3&&einbox6<=einbox4&&einbox6<=einbox5&&einbox1<=einbox1)
            {
                cout<<"einbox6 is smallest"<<endl;
            }

}




