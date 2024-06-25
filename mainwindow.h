#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

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
    void on_btnSingleton_clicked();

    void on_btnFactory_clicked();

    void on_btnFactory_2_clicked();


    void on_btnAbstractFactory_clicked();

    void on_btnBuilder1Pattern_clicked();

    void on_btnBuilder2Pattern_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
