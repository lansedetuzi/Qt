#include "MainWindow.h"

#include <QDir>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVBoxLayout>
#include <QVideoWidget>

#include "GScrollArea.h"

const QString c_songDir                     = "F:/KwDownload/song/";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setCentralWidget(new QWidget(this));
    m_mainLayout = new QVBoxLayout;
    centralWidget()->setLayout(m_mainLayout);

//    initTestCase();

    initSong();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initTestCase()
{
    testGTextEdit();
    testGScrollArea();
}

void MainWindow::testGScrollArea()
{
    GScrollArea *oScrollArea = new GScrollArea(this);
    m_mainLayout->addWidget(oScrollArea);
}

void MainWindow::testGTextEdit()
{
    GTextEdit *oTextEdit = new GTextEdit(this);
    m_mainLayout->addWidget(oTextEdit);
}

void MainWindow::initSong()
{
    QDir oSongDir(c_songDir);
    if (!oSongDir.exists())
    {
        return;
    }

    QMediaPlaylist *pPlayList = new QMediaPlaylist;

    QStringList oFileList = oSongDir.entryList(QDir::Files);
    foreach (QString oFilePath, oFileList) {
        pPlayList->addMedia(QMediaContent(QUrl(c_songDir + oFilePath)));
    }

    QMediaPlayer *pMediaPlay = new QMediaPlayer;
    pMediaPlay->setPlaylist(pPlayList);

    QVideoWidget *pVideoWidget = new QVideoWidget(this);
    pMediaPlay->setVideoOutput(pVideoWidget);

    pVideoWidget->show();
    pMediaPlay->play();
}
