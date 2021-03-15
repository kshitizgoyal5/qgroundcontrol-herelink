#ifndef QGCDIALOG_H
#define QGCDIALOG_H

#include <QObject>
#include <QWidget>
#include <QDialog>
#include "dialog.h"
class QGCDialog : public QObject
{
    Q_OBJECT
public:
    explicit QGCDialog(QObject *parent = nullptr);
    Q_INVOKABLE void open(int mode);
signals:
    void openBox(int mode);
public slots:
    void _openBox(int mode);
private:
    Dialog* dialog;
};

#endif // QGCDIALOG_H
