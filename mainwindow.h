#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Check_clicked();

    void on_pushButton_Back_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_Check_2_clicked();

    void on_pushButton_Back_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_Back_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_Check_3_clicked();

    void on_pushButton_Back_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_Check_4_clicked();

    void on_pushButton_Back_5_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
