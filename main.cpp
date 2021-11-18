#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Good mo, dauther");
button.resize(280, 180);
button.show( );
 
return app.exec( );
}