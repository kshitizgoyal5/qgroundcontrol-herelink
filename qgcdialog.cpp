#include "qgcdialog.h"
#include "QGCApplication.h"
QGCDialog::QGCDialog(QObject *parent) : QObject(parent)
{

}

void QGCDialog::open(int mode)
{
    connect(this, &QGCDialog::openBox, this, &QGCDialog::_openBox);
    emit openBox(mode);
}

void QGCDialog::_openBox(int mode)
{
//    dialog = new Dialog();
//    dialog->show();
    QDialog box;
    box.exec();
    //qgcApp()->toolbox()->multiVehicleManager()->activeVehicle();
}
