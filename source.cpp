#include<iostream>
#include<windows.h>
using namespace std;
//              functions are defined below main in same order;
void gotoxy(int,int);
int checkbox(int soduku[6][6],int,int,int,int);//first int for initializing i second for condition check for i;
void printarray(int a[],int sze);
int  checkrow(int soduku[6][6],int);//where row starts with zero;
int checkcol(int soduku[6][6],int);//where column starts with zero;
void findzeroposition(int soduku[6][6]);
int selectbestelement(int soduku[6][6]);
void checkoutsoduku(int soduku[6][6]);
void solve10row(int soduku[6][6]);
void solve10col(int soduku[6][6]);

                            /*starting of main function*/
int positionofzero[36][2],p=0;//here k is for how many elements is zero ;
/******************************************************************************************
//                              Main function
******************************************************************************************/
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
    cout<<"\t****Enter the Element of 6x6 matrix continuously and Enter 0 for non-determined value****\n";
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
/*checking soduku is solved or not*/
checkoutsoduku(soduku);
return 0;
}
/*******************************************************************************************
//                                  gotoxy function
*******************************************************************************************/
void gotoxy(int row,int column)
{
    COORD coord;
    coord.X=row;
    coord.Y=column;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
/*******************************************************************************************
                                    checkbox fuction
*******************************************************************************************/
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
        return 1;
    }
    else
        return 0;
}
/******************************************************************************************
//                              printarray function
******************************************************************************************/
void printarray(int a[],int sze)
{
    cout<<endl<<"printing a[]"<<endl;
    int i;
    for(i=0;i<sze;i++)
    {
        cout<<a[i]<<" ";
    }
}
/******************************************************************************************
//                                  checkrow function
******************************************************************************************/
int checkrow(int soduku[6][6],int x)
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
    if(sze==0)//size is not zero only when row is not arranged;
    {
        return 1;
    }
    else
        return 0;

}
/*******************************************************************************************
//                              checkcol function
*******************************************************************************************/
int checkcol(int soduku[6][6],int y)
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
    if(sze==0) //size is not zero only when column is not arranged;
    {
        return 1;
    }
    else
        return 0;
}
/*******************************************************************************************
//                              findzeroposition function
*******************************************************************************************/
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
/*******************************************************************************************
//                          selectbestelement fuction
*******************************************************************************************/
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
            cout<<"element in box6 "<<einbox6<<endl<<endl;
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
/************************************************************************************************************************
//                                  checkoutsoduku function
*************************************************************************************************************************/
void checkoutsoduku(int soduku[6][6])
{
    int total=checkbox(soduku,0,2,0,3)+checkbox(soduku,0,2,3,6)+checkbox(soduku,2,4,0,3)+checkbox(soduku,2,4,3,6)+checkbox(soduku,4,6,0,3)+checkbox(soduku,4,6,3,6)
    +checkrow(soduku,0)+checkrow(soduku,1)+checkrow(soduku,2)+checkrow(soduku,3)+checkrow(soduku,4)+checkrow(soduku,5)
    +checkcol(soduku,0)+checkcol(soduku,1)+checkcol(soduku,2)+checkcol(soduku,3)+checkcol(soduku,4)+checkcol(soduku,5);
    if(total==18)
        cout<<"soduku is solved by soduku-solver and soduku is correct :)"<<endl;
    else
        cout<<"soduku is not solved by soduku-solver :("<<endl;
}


