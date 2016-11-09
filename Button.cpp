//Calculator, Advanced System Programming
//Amirkabir University of Technology, Electrical Engineering Faculty
//Ehsan Misaghi 8923706

#include <QtGui>

#include "Button.h"

Button::Button(const QString &text, QWidget *parent)
    : QToolButton(parent)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    setText(text);
}

QSize Button::sizeHint() const
{
    QSize size = QToolButton::sizeHint();
    size.rheight() += 20;
    size.rwidth() = qMax(size.width(), size.height());
    return size;
}



