//Calculator, Advanced System Programming
//Amirkabir University of Technology, Electrical Engineering Faculty
//Ehsan Misaghi 8923706

#ifndef BUTTON_H
 #define BUTTON_H

 #include <QToolButton>

 class Button : public QToolButton
 {
     Q_OBJECT

 public:
     Button(const QString &text, QWidget *parent = 0);

     QSize sizeHint() const;
 };

 #endif
