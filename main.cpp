//Calculator, Advanced System Programming
//Amirkabir University of Technology, Electrical Engineering Faculty
//Ehsan Misaghi 8923706

#include <QApplication>

#include "Calculator.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}
