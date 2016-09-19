#include "secmainwindow.h"
#include "ui_secmainwindow.h"
#include<QPixmap>
#include<QLineEdit>
#include<infodialog.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int checkbox(int soduku[6][6],int,int,int,int);//first int for initializing i second for condition check for i;
int  checkrow(int soduku[6][6],int);//where row starts with zero;
int checkcol(int soduku[6][6],int);//where column starts with zero;
int findzero(int soduku[6][6]);
void checkoutsoduku(int soduku[6][6],secMainWindow *);
void solve10row(int soduku[6][6]);
void solve10col(int soduku[6][6]);
void solve10box(int soduku[6][6]);
void tempsolve10box(int soduku[6][6],int r,int s,int t,int u);
void solve(int soduku[6][6]);
int hardsolve(int soduku[6][6]);
int countrowzero(int soduku[6][6],int x);
int countcolzero(int soduku[6][6],int x);
int smallestposition(int a[],int sze);
void conflict(int soduku[6][6]);
                            /*starting of main function*/
int p=0;//here k is for how many elements is zero ;



secMainWindow::secMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secMainWindow)
{
    ui->setupUi(this);
    QPixmap qpic("resources/brain.png");
    ui->label_5->setPixmap(qpic.scaled(50,50,Qt::KeepAspectRatio));

     ui->lineEdit->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_2->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_3->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_4->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_5->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_6->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_7->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_8->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_9->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_10->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_11->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_12->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_13->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_14->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_15->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_16->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_17->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_18->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_19->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_20->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_21->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_22->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_23->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_24->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_25->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_26->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_27->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_28->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_29->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_30->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_31->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_32->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_33->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_34->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_35->setValidator(new QIntValidator(0, 6, this));
     ui->lineEdit_36->setValidator(new QIntValidator(0, 6, this));



}

secMainWindow::~secMainWindow()
{
    delete ui;
}
void secMainWindow::deleteme(){
    this->close();
}

void secMainWindow::on_pushButton_clicked()
{
    int soduku[6][6];
     soduku[0][0]=ui->lineEdit->text().toInt();
     soduku[0][1]=ui->lineEdit_7->text().toInt();
     soduku[0][2]=ui->lineEdit_13->text().toInt();
     soduku[0][3]=ui->lineEdit_19->text().toInt();
     soduku[0][4]=ui->lineEdit_25->text().toInt();
     soduku[0][5]=ui->lineEdit_31->text().toInt();
     soduku[1][0]=ui->lineEdit_2->text().toInt();
     soduku[1][1]=ui->lineEdit_8->text().toInt();
     soduku[1][2]=ui->lineEdit_14->text().toInt();
     soduku[1][3]=ui->lineEdit_20->text().toInt();
     soduku[1][4]=ui->lineEdit_26->text().toInt();
     soduku[1][5]=ui->lineEdit_32->text().toInt();
     soduku[2][0]=ui->lineEdit_3->text().toInt();
     soduku[2][1]=ui->lineEdit_9->text().toInt();
     soduku[2][2]=ui->lineEdit_15->text().toInt();
    soduku[2][3]=ui->lineEdit_21->text().toInt();
    soduku[2][4]=ui->lineEdit_27->text().toInt();
    soduku[2][5]=ui->lineEdit_33->text().toInt();
    soduku[3][0]=ui->lineEdit_4->text().toInt();
    soduku[3][1]=ui->lineEdit_10->text().toInt();
    soduku[3][2]=ui->lineEdit_16->text().toInt();
    soduku[3][3]=ui->lineEdit_22->text().toInt();
    soduku[3][4]=ui->lineEdit_28->text().toInt();
    soduku[3][5]=ui->lineEdit_34->text().toInt();
    soduku[4][0]=ui->lineEdit_5->text().toInt();
    soduku[4][1]=ui->lineEdit_11->text().toInt();
    soduku[4][2]=ui->lineEdit_17->text().toInt();
    soduku[4][3]=ui->lineEdit_23->text().toInt();
    soduku[4][4]=ui->lineEdit_29->text().toInt();
    soduku[4][5]=ui->lineEdit_35->text().toInt();
    soduku[5][0]=ui->lineEdit_6->text().toInt();
    soduku[5][1]=ui->lineEdit_12->text().toInt();
    soduku[5][2]=ui->lineEdit_18->text().toInt();
    soduku[5][3]=ui->lineEdit_24->text().toInt();
    soduku[5][4]=ui->lineEdit_30->text().toInt();
    soduku[5][5]=ui->lineEdit_36->text().toInt();


if(findzero(soduku)>28){
    infoDialog *infopoint = new infoDialog();
    infopoint->show();
    goto exit1;
}


sollve:
if(findzero(soduku))
{
    ////cout<<"coming from hardsolve";
    solve(soduku);
}
if(findzero(soduku))
{
    if(hardsolve(soduku)==11|| 1)//cout<<endl<<"call hard solve"<<endl)
    {
        goto sollve;
    }

}
checkoutsoduku(soduku,this);
//cout<<"\nPress any key for exit and 99 for solve again";


ui->lineEdit->setText(QString::number(soduku[0][0]));
ui->lineEdit_7->setText(QString::number(soduku[0][1]));
ui->lineEdit_13->setText(QString::number(soduku[0][2]));
ui->lineEdit_19->setText(QString::number(soduku[0][3]));
ui->lineEdit_25->setText(QString::number(soduku[0][4]));
ui->lineEdit_31->setText(QString::number(soduku[0][5]));
ui->lineEdit_2->setText(QString::number(soduku[1][0]));
ui->lineEdit_8->setText(QString::number(soduku[1][1]));
ui->lineEdit_14->setText(QString::number(soduku[1][2]));
ui->lineEdit_20->setText(QString::number(soduku[1][3]));
ui->lineEdit_26->setText(QString::number(soduku[1][4]));
ui->lineEdit_32->setText(QString::number(soduku[1][5]));
ui->lineEdit_3->setText(QString::number(soduku[2][0]));
ui->lineEdit_9->setText(QString::number(soduku[2][1]));
ui->lineEdit_15->setText(QString::number(soduku[2][2]));
ui->lineEdit_21->setText(QString::number(soduku[2][3]));
ui->lineEdit_27->setText(QString::number(soduku[2][4]));
ui->lineEdit_33->setText(QString::number(soduku[2][5]));
ui->lineEdit_4->setText(QString::number(soduku[3][0]));
ui->lineEdit_10->setText(QString::number(soduku[3][1]));
ui->lineEdit_16->setText(QString::number(soduku[3][2]));
ui->lineEdit_22->setText(QString::number(soduku[3][3]));
ui->lineEdit_28->setText(QString::number(soduku[3][4]));
ui->lineEdit_34->setText(QString::number(soduku[3][5]));
ui->lineEdit_5->setText(QString::number(soduku[4][0]));
ui->lineEdit_11->setText(QString::number(soduku[4][1]));
ui->lineEdit_17->setText(QString::number(soduku[4][2]));
ui->lineEdit_23->setText(QString::number(soduku[4][3]));
ui->lineEdit_29->setText(QString::number(soduku[4][4]));
ui->lineEdit_35->setText(QString::number(soduku[4][5]));
ui->lineEdit_6->setText(QString::number(soduku[5][0]));
ui->lineEdit_12->setText(QString::number(soduku[5][1]));
ui->lineEdit_18->setText(QString::number(soduku[5][2]));
ui->lineEdit_24->setText(QString::number(soduku[5][3]));
ui->lineEdit_30->setText(QString::number(soduku[5][4]));
ui->lineEdit_36->setText(QString::number(soduku[5][5]));


exit1:
//exit if more than 28 zero find in matrix;
if(findzero(soduku)>0){
    this->close();
}

return;
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
        return 1;
    }
    else
        return 0;
}
/******************************************************************************************
                                printarray function:for printing 1 dimension array
******************************************************************************************/
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
void checkoutsoduku(int soduku[6][6],secMainWindow *pointit)
{
    int total=checkbox(soduku,0,2,0,3)+checkbox(soduku,0,2,3,6)+checkbox(soduku,2,4,0,3)+checkbox(soduku,2,4,3,6)+checkbox(soduku,4,6,0,3)+checkbox(soduku,4,6,3,6)
    +checkrow(soduku,0)+checkrow(soduku,1)+checkrow(soduku,2)+checkrow(soduku,3)+checkrow(soduku,4)+checkrow(soduku,5)
    +checkcol(soduku,0)+checkcol(soduku,1)+checkcol(soduku,2)+checkcol(soduku,3)+checkcol(soduku,4)+checkcol(soduku,5);
    if(total==18){
        // cout <<"\n\n\t\t\t\t\t!!!soduku is solved Successfully :) !!!"<<endl;
        successdialog * succ = new successdialog();
        succ->show();
}
    else{
        AlertDialog * alerts = new AlertDialog();
        alerts->show();
        pointit->deleteme();

        // cout<<"\n\n\t\t\t\t!!!soduku is not solved or solved incorrectly:( !!!"<<endl;
}
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
            //cout<<"value "<<a[0]<<"pos "<<temp1<<" "<<temp2<<endl;
        soduku[temp1][temp2]=a[0];
        //cout<<"apply value"<<soduku[temp1][temp2]<<endl;
        }
        temp=0;
    }
}
void solve10col(int soduku[6][6])
{
    //cout<<"in solve 10 col"<<endl;
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
            //cout<<"value "<<a[0]<<"pos "<<temp1<<" "<<temp2<<endl;
        soduku[temp1][temp2]=a[0];
        //cout<<"apply value"<<soduku[temp1][temp2]<<endl;
        }
        temp=0;
    }
}
void solve10box(int soduku[6][6])
{
    //cout<<"in solve box 10"<<endl;
    tempsolve10box(soduku,0,2,0,3);
    tempsolve10box(soduku,0,2,3,6);
    tempsolve10box(soduku,2,4,0,3);
    tempsolve10box(soduku,2,4,3,6);
    tempsolve10box(soduku,4,6,0,3);
    tempsolve10box(soduku,4,6,3,6);
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
         //cout<<"value "<<a[0]<<"pos "<<temp1<<" "<<temp2<<endl;
        soduku[temp1][temp2]=a[0];
        //cout<<"apply value"<<soduku[temp1][temp2]<<endl;
    }
}
/********************************************************************************************************************
                                        solve function
**********************************************************************************************************************/
void solve(int soduku[6][6])
{
    solveagain:
        //cout<<"in solve"<<endl;
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
            temp=0;
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
            temp=0;
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
int hardsolve(int soduku[6][6])
{
    //starts:
    int label[12];
    label[0]=countrowzero(soduku,0);
    label[1]=countrowzero(soduku,1);
    label[2]=countrowzero(soduku,2);
    label[3]=countrowzero(soduku,3);
    label[4]=countrowzero(soduku,4);
    label[5]=countrowzero(soduku,5);
    labelfail:
        if(smallestposition(label,6)==100)
        {
            conflict(soduku);
            return 11;

        }
    int l=smallestposition(label,6);
    if(l<6)
    {
        for(int i=0;i<6;i++)//for solving all labels from 0 to 5;
        {
            if(soduku[l][i]==0)
            {
                int a[6]={1,2,3,4,5,6},sze1=6;
                int b[6]={1,2,3,4,5,6},sze2=6;
                int c[6]={1,2,3,4,5,6},sze3=6;
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze1;t++)
                    {
                       if(soduku[l][s]==a[t])
                       {
                           for(int z=t;z<sze1-1;z++)
                           {
                               a[z]=a[z+1];
                           }
                           sze1--;
                       }
                    }
                }
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze2;t++)
                    {
                       if(soduku[s][i]==b[t])
                       {
                           for(int z=t;z<sze2-1;z++)
                           {
                               b[z]=b[z+1];
                           }
                           sze2--;
                       }
                    }
                }
                /*for solving box*/
                int m,n,o,p;
                if(l<2&&i<3)
                {
                    m=0;
                    n=2;
                    o=0;
                    p=3;
                }
                else if(l<2&&i>2)
                {
                    m=0;
                    n=2;
                    o=3;
                    p=6;
                }
                else if(l>1&&l<4&&i<3)
                {
                    m=2;
                    n=4;
                    o=0;
                    p=3;
                }
                else if(l>1&&l<4&&i>2)
                {
                    m=2;
                    n=4;
                    o=3;
                    p=6;
                }
                else if(l>3&&i<3)
                {
                    m=4;
                    n=6;
                    o=0;
                    p=3;
                }
                else if(l>3&&i>2)
                {
                    m=4;
                    n=6;
                    o=3;
                    p=6;
                }
                for(int ii=m;ii<n;ii++)
                {
                    for(int jj=o;jj<p;jj++)
                    {
                       for(int kk=0;kk<sze3;kk++)
                       {
                           if(soduku[ii][jj]==c[kk])
                           {
                               for(int ss=kk;ss<sze3-1;ss++)
                               {
                                   c[ss]=c[ss+1];
                               }
                               sze3--;
                           }
                       }
                    }
                }
    /*now we have all the possible value of soduku elements by row in a[],by column in b[] and by box is in c[]*/
                int sol[6],szesol=0;
                for(int ii=0;ii<sze1;ii++)
                {
                    for(int jj=0;jj<sze2;jj++)
                    {
                        for(int kk=0;kk<sze3;kk++)
                        {
                            if(a[ii]==b[jj]&&b[jj]==c[kk])
                            {
                                sol[szesol]=a[ii];
                                szesol++;
                            }
                        }
                    }
                }
                if(szesol==1)
                {
                    //cout<<"value "<<sol[0]<<"pos "<<l<<" "<<i<<endl;
                    soduku[l][i]=sol[0];
                    //cout<<"input is "<<soduku[l][i];
                    return 11;
                }
            }
            if(i==5)
            {
                label[l]=10+label[l];
                goto labelfail;
            }
        }
    }
//else statement if(l>5)
return 0;
}
int countrowzero(int soduku[6][6],int x)//function for calculating zero in row where x is row number and return number of zero in row
{
    int temp=0;
    for(int i=0;i<6;i++)
    {
        if(soduku[x][i]==0)
        {
            temp++;
        }
    }
    return temp;
}
int countcolzero(int soduku[6][6],int x)//function for calculating zero in  column where x is column number and return number of zero in column
{
    int temp=0;
    for(int i=0;i<6;i++)
    {
        if(soduku[i][x]==0)
        {
            temp++;
        }
    }
    return temp;
}
int smallestposition(int label[],int sze)
{
    int x=1000;
    for(int i=0;i<sze;i++)
    {
        if(label[i]<x&&label[i]<7)
        {
            x=i;
        }
    }
    if(x!=1000)
    {
    return x;
    }
    else
    {
        return 100;
    }

}
void conflict(int soduku[6][6])
{
    //cout<<"in conflict"<<endl;
    int sol[6],szesol=0;
    int solrow[6],szesolrow=0;
    int solcol[6],szesolcol=0;
for(int l=0;l<6;l++)
{
for(int i=0;i<6;i++)//for solving all labels from 0 to 5;
        {
            if(soduku[l][i]==0)
            {
                {
                int a[6]={1,2,3,4,5,6},sze1=6;
                int b[6]={1,2,3,4,5,6},sze2=6;
                int c[6]={1,2,3,4,5,6},sze3=6;
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze1;t++)
                    {
                       if(soduku[l][s]==a[t])
                       {
                           for(int z=t;z<sze1-1;z++)
                           {
                               a[z]=a[z+1];
                           }
                           sze1--;
                       }
                    }
                }
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze2;t++)
                    {
                       if(soduku[s][i]==b[t])
                       {
                           for(int z=t;z<sze2-1;z++)
                           {
                               b[z]=b[z+1];
                           }
                           sze2--;
                       }
                    }
                }
                /*for solving box*/
                int m,n,o,p;
                if(l<2&&i<3)
                {
                    m=0;
                    n=2;
                    o=0;
                    p=3;
                }
                else if(l<2&&i>2)
                {
                    m=0;
                    n=2;
                    o=3;
                    p=6;
                }
                else if(l>1&&l<4&&i<3)
                {
                    m=2;
                    n=4;
                    o=0;
                    p=3;
                }
                else if(l>1&&l<4&&i>2)
                {
                    m=2;
                    n=4;
                    o=3;
                    p=6;
                }
                else if(l>3&&i<3)
                {
                    m=4;
                    n=6;
                    o=0;
                    p=3;
                }
                else if(l>3&&i>2)
                {
                    m=4;
                    n=6;
                    o=3;
                    p=6;
                }
                for(int ii=m;ii<n;ii++)
                {
                    for(int jj=o;jj<p;jj++)
                    {
                       for(int kk=0;kk<sze3;kk++)
                       {
                           if(soduku[ii][jj]==c[kk])
                           {
                               for(int ss=kk;ss<sze3-1;ss++)
                               {
                                   c[ss]=c[ss+1];
                               }
                               sze3--;
                           }
                       }
                    }
                }
    /*now we have all the possible value of soduku elements by row in a[],by column in b[] and by box is in c[]*/
                for(int ii=0;ii<sze1;ii++)
                {
                    for(int jj=0;jj<sze2;jj++)
                    {
                        for(int kk=0;kk<sze3;kk++)
                        {
                            if(a[ii]==b[jj]&&b[jj]==c[kk])
                            {
                                sol[szesol]=a[ii];
                                szesol++;
                            }
                        }
                    }
                }
                }
            /***********************************************************************/
            //solving row zero
            for(int ff=0;ff<6;ff++)
            {
                if(soduku[l][ff]==0)
                {
                    {
                int a[6]={1,2,3,4,5,6},sze1=6;
                int b[6]={1,2,3,4,5,6},sze2=6;
                int c[6]={1,2,3,4,5,6},sze3=6;
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze1;t++)
                    {
                       if(soduku[l][s]==a[t])
                       {
                           for(int z=t;z<sze1-1;z++)
                           {
                               a[z]=a[z+1];
                           }
                           sze1--;
                       }
                    }
                }
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze2;t++)
                    {
                       if(soduku[s][ff]==b[t])
                       {
                           for(int z=t;z<sze2-1;z++)
                           {
                               b[z]=b[z+1];
                           }
                           sze2--;
                       }
                    }
                }
                /*for solving box*/
                int m,n,o,p;
                if(l<2&&ff<3)
                {
                    m=0;
                    n=2;
                    o=0;
                    p=3;
                }
                else if(l<2&&ff>2)
                {
                    m=0;
                    n=2;
                    o=3;
                    p=6;
                }
                else if(l>1&&l<4&&ff<3)
                {
                    m=2;
                    n=4;
                    o=0;
                    p=3;
                }
                else if(l>1&&l<4&&ff>2)
                {
                    m=2;
                    n=4;
                    o=3;
                    p=6;
                }
                else if(l>3&&ff<3)
                {
                    m=4;
                    n=6;
                    o=0;
                    p=3;
                }
                else if(l>3&&ff>2)
                {
                    m=4;
                    n=6;
                    o=3;
                    p=6;
                }
                for(int ii=m;ii<n;ii++)
                {
                    for(int jj=o;jj<p;jj++)
                    {
                       for(int kk=0;kk<sze3;kk++)
                       {
                           if(soduku[ii][jj]==c[kk])
                           {
                               for(int ss=kk;ss<sze3-1;ss++)
                               {
                                   c[ss]=c[ss+1];
                               }
                               sze3--;
                           }
                       }
                    }
                }
    /*now we have all the possible value of soduku elements by row in a[],by column in b[] and by box is in c[]*/
                for(int ii=0;ii<sze1;ii++)
                {
                    for(int jj=0;jj<sze2;jj++)
                    {
                        for(int kk=0;kk<sze3;kk++)
                        {
                            if(a[ii]==b[jj]&&b[jj]==c[kk])
                            {
                                solrow[szesolrow]=a[ii];
                                szesolrow++;
                            }
                        }
                    }
                }
                }
                }
            }
            /************************************************************************/
            for(int ff=0;ff<6;ff++)
            {
                if(soduku[ff][i]==0)
                {
                    {
                int a[6]={1,2,3,4,5,6},sze1=6;
                int b[6]={1,2,3,4,5,6},sze2=6;
                int c[6]={1,2,3,4,5,6},sze3=6;
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze1;t++)
                    {
                       if(soduku[ff][s]==a[t])
                       {
                           for(int z=t;z<sze1-1;z++)
                           {
                               a[z]=a[z+1];
                           }
                           sze1--;
                       }
                    }
                }
                for(int s=0;s<6;s++)//possible element by watching row
                {
                    for(int t=0;t<sze2;t++)
                    {
                       if(soduku[s][i]==b[t])
                       {
                           for(int z=t;z<sze2-1;z++)
                           {
                               b[z]=b[z+1];
                           }
                           sze2--;
                       }
                    }
                }
                /*for solving box*/
                int m,n,o,p;
                if(ff<2&&i<3)
                {
                    m=0;
                    n=2;
                    o=0;
                    p=3;
                }
                else if(ff<2&&i>2)
                {
                    m=0;
                    n=2;
                    o=3;
                    p=6;
                }
                else if(ff>1&&ff<4&&i<3)
                {
                    m=2;
                    n=4;
                    o=0;
                    p=3;
                }
                else if(ff>1&&ff<4&&i>2)
                {
                    m=2;
                    n=4;
                    o=3;
                    p=6;
                }
                else if(ff>3&&i<3)
                {
                    m=4;
                    n=6;
                    o=0;
                    p=3;
                }
                else if(ff>3&&i>2)
                {
                    m=4;
                    n=6;
                    o=3;
                    p=6;
                }
                for(int ii=m;ii<n;ii++)
                {
                    for(int jj=o;jj<p;jj++)
                    {
                       for(int kk=0;kk<sze3;kk++)
                       {
                           if(soduku[ii][jj]==c[kk])
                           {
                               for(int ss=kk;ss<sze3-1;ss++)
                               {
                                   c[ss]=c[ss+1];
                               }
                               sze3--;
                           }
                       }
                    }
                }
    /*now we have all the possible value of soduku elements by row in a[],by column in b[] and by box is in c[]*/
                for(int ii=0;ii<sze1;ii++)
                {
                    for(int jj=0;jj<sze2;jj++)
                    {
                        for(int kk=0;kk<sze3;kk++)
                        {
                            if(a[ii]==b[jj]&&b[jj]==c[kk])
                            {
                                solcol[szesolcol]=a[ii];
                                szesolcol++;
                            }
                        }
                    }
                }
                }
                }
            }
            /*************************************************************************/
            for(int ii=0;ii<szesol;ii++)
            {
                for(int jj=0;jj<szesolcol;jj++)
                {
                    for(int kk=0;kk<szesolrow;kk++)
                    {
                        if(sol[ii]==solrow[jj]&&sol[ii]==solcol[kk])
                        {
                            //cout<<"reached to conflict input"<<endl;
                            //cout<<"value "<<sol[ii]<<" posit"<<l<<" "<<i<<endl;
                            soduku[l][i]=sol[ii];
                            //cout<<"value in soduku "<<soduku[l][i]<<endl;
                            return;
                        }
                    }
                }
            }
            }
}
}

}








