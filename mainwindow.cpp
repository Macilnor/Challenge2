#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->pageMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool isPrime(int a) {
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page1);
}

void MainWindow::on_pushButton_Check_clicked()
{
    int a = ui->lineEdit_a->text().toInt();
    int b = ui->lineEdit_b->text().toInt();
    if (a + b >= 10 && a + b <= 20)
    {
        ui->labelRes->setText("True");
    }
    else
    {
        ui->labelRes->setText("False");
    }
}

void MainWindow::on_pushButton_Back_1_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMenu);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page2);
}

void MainWindow::on_pushButton_Check_2_clicked()
{
    int a = ui->lineEdit_a_2->text().toInt();
    int b = ui->lineEdit_b_2->text().toInt();
    if (( a == 10 && b == 10 ) || a + b == 10)
    {
        ui->labelRes_2->setText("True");
    }
    else
    {
        ui->labelRes_2->setText("False");
    }
}

void MainWindow::on_pushButton_Back_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMenu);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page3);
    QString txt ("");
    for (int i = 1; i <= 50; i++)
        {
            if (i % 2 != 0)
            {
                txt += QString::number(i) + ' ';
            }
            if (i == 20 || i == 35)
            {
                txt += "\n";
            }
        }
    ui->label_2->setText(txt);
}

void MainWindow::on_pushButton_Back_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMenu);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page4);
}

void MainWindow::on_pushButton_Check_3_clicked()
{
    int a = ui->lineEdit_a_3->text().toInt();

    if (isPrime(a))
        {
            ui->labelRes_3->setText(QString::number(a) + " простое число.");
        }
    else
        {
            ui->labelRes_3->setText(QString::number(a) + " НЕ простое число.");
        }

}

void MainWindow::on_pushButton_Back_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMenu);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page5);
}

void MainWindow::on_pushButton_Check_4_clicked()
{
    int a = ui->lineEdit_a_4->text().toInt();
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
     {
        ui->labelRes_4->setText(QString::number(a) + " високосный год.");
     }
     else
     {
        ui->labelRes_4->setText(QString::number(a) + " НЕ високосный год.");
     }
}

void MainWindow::on_pushButton_Back_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMenu);
}
