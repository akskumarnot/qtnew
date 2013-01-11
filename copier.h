#ifndef COPIER_H
#define COPIER_H

#include<QMainWindow>
#include<QLineEdit>
#include<QLabel>
#include<QPushButton>
#include<QProgressBar>

class copier:public QMainWindow
{Q_OBJECT
QLineEdit *src;
QLineEdit *dest;
QLabel *srclab;
QLabel *destlab;
QPushButton *pb;
QProgressBar *progress;
public:
copier(QWidget*parent=0);

void copy(QString a,QString b);
int valid(char a[],char b[]);
public slots:
void dooperation();
void done();
signals:
void operationdone();
};

#endif
