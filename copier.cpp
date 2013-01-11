
#include<QVBoxLayout>
#include<QHBoxLayout>
#include"copier.h"
#include<cstdlib>
#include<QString>
#include<QDebug>

copier::copier(QWidget* parent):QMainWindow(parent)
{
src=new QLineEdit();
dest=new QLineEdit();
pb=new QPushButton("copy-paste");
//add Icon for the button
connect(pb,SIGNAL(clicked()),this,SLOT(dooperation()));
destlab=new QLabel("Destination dir/file");
srclab=new QLabel("Source dir/file");
QHBoxLayout *lay1=new QHBoxLayout();
lay1->addWidget(srclab);
lay1->addWidget(src);
srclab->setBuddy(src);
QHBoxLayout *lay2=new QHBoxLayout();
lay2->addWidget(destlab);
lay2->addWidget(dest);
destlab->setBuddy(dest);
pb->setFixedSize(100,100);
QVBoxLayout *lay3=new QVBoxLayout();
lay3->addLayout(lay1);
lay3->addLayout(lay2);
QHBoxLayout *lay4=new QHBoxLayout();
lay4->addLayout(lay3);
lay4->addWidget(pb);
QWidget *wid=new QWidget();
wid->setLayout(lay4);
setCentralWidget(wid);
setFixedSize(550,150);
connect(this,SIGNAL(operationdone()),this,SLOT(done()));
setWindowTitle("akshay's copier");
show();
}


void copier::dooperation()
{


//first one
QString a=dest->text();
QByteArray lang1=a.toLocal8Bit();
char *d=lang1.data();
//second one
QString b=src->text();
QByteArray lang2=b.toLocal8Bit();
char *s=lang2.data();


   // for validating
if(valid(s,d))
 {
  QString command="cp -r "+a+" "+b;
  
  qDebug()<<command;
  QByteArray lang3=command.toLocal8Bit();
  char *c=lang3.data();
 int a=system(c);
 emit operationdone();
 }
else
 { 
 QLabel*message=new QLabel("the destination is an invalid entry");
 message->show();
 }
emit operationdone();
}


int copier::valid(char a[],char b[])
{
//second for /
int fl=0;

for(int i=0;b[i]!='\0';i++)
 {
  if(b[i]=='/')
   {fl=1;}
 }
if(fl==0)
 {return 0;}

//first for /

for(int i=0;a[i]!='\0';i++)
 {
  if(a[i]=='/')
   {fl=1;}
 }
if(fl==0)
 {return 0;}

return 1;
}


void copier::done()
{
QLabel *lab=new QLabel("this operation is done successfully");
QPushButton *but=new QPushButton("ok");
QVBoxLayout *lay=new QVBoxLayout();
lay->addWidget(lab);
lay->addWidget(but);
QWidget *wid=new QWidget();
wid->setLayout(lay);
connect(but,SIGNAL(clicked()),wid,SLOT(close()));
wid->show();
}


