#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, flowers");
button.resize(220, 110);
button.show( );
 
return app.exec( );
}