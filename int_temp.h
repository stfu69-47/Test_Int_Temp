#ifndef INT_TEMP_H
#define INT_TEMP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Int_Temp; }
QT_END_NAMESPACE

class Int_Temp : public QMainWindow
{
    Q_OBJECT

public:
    Int_Temp(QWidget *parent = nullptr);
    ~Int_Temp();
signals:
    void mySignal();
public slots:

    void pushButton();
    void isChecked();

private:
    Ui::Int_Temp *ui;

};
#endif // INT_TEMP_H
