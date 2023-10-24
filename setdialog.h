#ifndef SETDIALOG_H
#define SETDIALOG_H

#include <QDialog>

namespace Ui {
class SetDialog;
}

class SetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SetDialog(QWidget *parent = nullptr);
    ~SetDialog();

private slots:
    void on_BtnAdd_clicked();

signals:
    void sigAddone(int value);

private:
    Ui::SetDialog *ui;
};

#endif // SETDIALOG_H
