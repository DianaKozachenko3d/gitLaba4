#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, trees");
button.resize(220, 80);
button.show( );
 
return app.exec( );
}