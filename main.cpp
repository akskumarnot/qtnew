#include<QApplication>
#include"copier.h"

int main(int argc,char* argv[])
{
QApplication app(argc,argv);
copier *cp=new copier();
Q_UNUSED(cp);
return app.exec();
}
