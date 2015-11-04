#include<iostream>
#include<windows.h>
using namespace std;
//              functions are defined below main in same order;
void gotoxy(int,int);
int checkbox(int soduku[6][6],int,int,int,int);//first int for initializing i second for condition check for i;
void printarray(int a[],int sze);
int  checkrow(int soduku[6][6],int);//where row starts with zero;
int checkcol(int soduku[6][6],int);//where column starts with zero;
int findzero(int soduku[6][6]);
void checkoutsoduku(int soduku[6][6]);
void solve10row(int soduku[6][6]);
void solve10col(int soduku[6][6]);
void solve10box(int soduku[6][6]);
void printsoduku(int soduku[6][6]);
void tempsolve10box(int soduku[6][6],int r,int s,int t,int u);
void solve(int soduku[6][6]);
                            /*starting of main function*/
int p=0;//here k is for how many elements is zero ;
/******************************************************************************************
                                Main function
******************************************************************************************/
int main()
{
int soduku[6][6];
int i,j; //for loops;
int x,y; //for cursor position on screen;
case1:   //label for goto syntax if user entered wrong input then start with this label;
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
    cout<<"\n\n\t\t\t\t\t\t   !!!Message!!!\n\t\t\tIf entered soduku is correct press 1 and If incorrect press 2 \n\t\t\t\t\t\t\t  ";
    cin>>x;
if(x==2)
{
   system("cls");
    goto case1;
}
/*checking soduku is solved or not*/
cout<<"\n\t\t\t\t\t!!please wait soduku is solving!!"<<endl;

if(findzero(soduku))
{
    solve(soduku);
}
checkoutsoduku(soduku);
printsoduku(soduku);
cout<<"\nPress any key for exit and 99 for solve again";
cin>>x;
if(x==99)
{
   system("cls");
    goto case1;
}
else
{
 return 0;
}
}
/*******************************************************************************************
                                    gotoxy function
*******************************************************************************************/
void gotoxy(int row,int column)
{
    COORD coord;
    coord.X=row;
    coord.Y=column;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
/*******************************************************************************************
                                    checkbox fuction//used by checksoduku
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
                                printarray function:for printing 1 dimension array
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
                                    checkrow function//used by checksoduku for checking row is arranged or not
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
                                checkcol function//used by checksoduku
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
//                              findzero function
*******************************************************************************************/
int findzero(int soduku[6][6])
{
    p=0;
for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        if(soduku[i][j]==0)
        {
            p++;
        }
    }
}
return p;
}
/************************************************************************************************************************
                                    checkoutsoduku function
*************************************************************************************************************************/
void checkoutsoduku(int soduku[6][6])
{
    int total=checkbox(soduku,0,2,0,3)+checkbox(soduku,0,2,3,6)+checkbox(soduku,2,4,0,3)+checkbox(soduku,2,4,3,6)+checkbox(soduku,4,6,0,3)+checkbox(soduku,4,6,3,6)
    +checkrow(soduku,0)+checkrow(soduku,1)+checkrow(soduku,2)+checkrow(soduku,3)+checkrow(soduku,4)+checkrow(soduku,5)
    +checkcol(soduku,0)+checkcol(soduku,1)+checkcol(soduku,2)+checkcol(soduku,3)+checkcol(soduku,4)+checkcol(soduku,5);
    if(total==18)
        cout<<"\n\n\t\t\t\t\t!!!soduku is solved Successfully :) !!!"<<endl;
    else
        cout<<"\n\n\t\t\t\t!!!soduku is not solved or solved incorrectly:( !!!"<<endl;
}
/**************************************************************************************************************
                                    solverow,solvecol,solvebox functions
***************************************************************************************************************/
void solve10row(int soduku[6][6])
{
    int temp=0;
    int temp1,temp2;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
         if(soduku[i][j]==0)
         {
             temp++;
             temp1=i;temp2=j;
         }
        }
        if(temp==1)
        {//solve problem;
            int a[6]={1,2,3,4,5,6};
            int l,m,n;
            int sze=6;
            for(l=0;l<6;l++)
            {
                for(m=0;m<sze;m++)
                {
                    if(soduku[i][l]==a[m])
                    {
                        for(n=m;n<sze;n++)
                        {
                            a[n]=a[n+1];
                        }
                        sze--;
                    }
                }
            }
        soduku[temp1][temp2]=a[0];
        }
        temp=0;
    }
}
void solve10col(int soduku[6][6])
{
    int temp=0;
    int temp1,temp2;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
         if(soduku[j][i]==0)
         {
             temp++;
             temp1=j;temp2=i;
         }
        }
        if(temp==1)//if there is only one zero then solve otherwise skip
        {//solve problem;
            int a[6]={1,2,3,4,5,6};
            int l,m,n;
            int sze=6;
            for(l=0;l<6;l++)
            {
                for(m=0;m<sze;m++)
                {
                    if(soduku[l][i]==a[m])
                    {
                        for(n=m;n<sze;n++)
                        {
                            a[n]=a[n+1];
                        }
                        sze--;
                    }
                }
            }
        soduku[temp1][temp2]=a[0];
        }
        temp=0;
    }
}
void solve10box(int soduku[6][6])
{
    tempsolve10box(soduku,0,2,0,3);
    tempsolve10box(soduku,0,2,3,6);
    tempsolve10box(soduku,2,4,0,3);
    tempsolve10box(soduku,2,4,3,6);
    tempsolve10box(soduku,4,6,0,3);
    tempsolve10box(soduku,4,6,3,6);
}
/***********************************************************************************************************
                                        printsoduku function
************************************************************************************************************/
void printsoduku(int soduku[6][6])
{
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<soduku[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void tempsolve10box(int soduku[6][6],int r,int s,int t,int u)
{
    int temp=0,temp1,temp2;
    for(int p=r;p<s;p++)
    {
        for(int q=t;q<u;q++)
        {
            if(soduku[p][q]==0)
            {
                temp++;
                temp1=p;temp2=q;
            }
        }
    }
    if(temp==1)
    {
        int a[6]={1,2,3,4,5,6};
        int sze=6;
        for(int i=r;i<s;i++)
        {
            for(int j=t;j<u;j++)
            {
                for(int k=0;k<sze;k++)
                {
                    if(a[k]==soduku[i][j])
                    {
                        for(int l=k;l<5;l++)
                        {
                        a[l]=a[l+1];
                        }
                        sze--;
                        break;
                    }
                }
            }
        }
        soduku[temp1][temp2]=a[0];
    }
}
void solve(int soduku[6][6])
{
    solveagain:
    solve10row(soduku);
    solve10col(soduku);
    solve10box(soduku);
    int temp=0;
    //checking for row if its have only one zero in row
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
         if(soduku[i][j]==0)
         {
             temp++;
         }
        }
        if(temp==1)
        {
            goto solveagain;
        }
        else
        {
            temp=0;
        }
    }
    //checking for column if its have only one zero in column;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
         if(soduku[j][i]==0)
         {
             temp++;
         }
        }
        if(temp==1)
        {
            goto solveagain;
        }
        else
        {
            temp=0;
        }
    }
    //checking for box if its have only one zero in box;
    for(int i=0;i<2;i++)//check first box
    {
        for(int j=0;j<3;j++)
        {
            if(soduku[i][j]==0)
            {
                temp++;
            }
        }
    }
    if(temp==1)
    {
        goto solveagain;
    }
    else
    {
        temp=0;
    }
    for(int i=0;i<2;i++)//check second box
    {
        for(int j=3;j<6;j++)
        {
            if(soduku[i][j]==0)
            {
                temp++;
            }
        }
    }
    if(temp==1)
    {
        goto solveagain;
    }
    else
    {
        temp=0;
    }
    for(int i=2;i<4;i++)//check third box
    {
        for(int j=0;j<3;j++)
        {
            if(soduku[i][j]==0)
            {
                temp++;
            }
        }
    }
    if(temp==1)
    {
        goto solveagain;
    }
    else
    {
        temp=0;
    }
    for(int i=2;i<4;i++)//check box fourth
    {
        for(int j=3;j<6;j++)
        {
            if(soduku[i][j]==0)
            {
                temp++;
            }
        }
    }
    if(temp==1)
    {
        goto solveagain;
    }
    else
    {
        temp=0;
    }
    for(int i=4;i<6;i++)//check fifth box
    {
        for(int j=0;j<3;j++)
        {
            if(soduku[i][j]==0)
            {
                temp++;
            }
        }
    }
    if(temp==1)
    {
        goto solveagain;
    }
    else
    {
        temp=0;
    }
    for(int i=4;i<6;i++)//check box sixth
    {
        for(int j=3;j<6;j++)
        {
            if(soduku[i][j]==0)
            {
                temp++;
            }
        }
    }
    if(temp==1)
    {
        goto solveagain;
    }
    else
    {
        temp=0;
    }
}
