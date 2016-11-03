#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void initTestCase();
    void testGScrollArea();
    void testGTextEdit();

    void initSong();

private:
    QVBoxLayout *m_mainLayout;
};

#endif // MAINWINDOW_H
