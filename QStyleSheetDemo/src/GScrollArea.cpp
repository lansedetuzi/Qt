#include "GScrollArea.h"

#include "GFileUtils.h"

const QString c_scrollAreaQss               = ":qsses/GScrollArea.qss";

GScrollArea::GScrollArea(QWidget *parent)
    : QScrollArea(parent)
{
    initGui();
}

void GScrollArea::initGui()
{
    setStyleSheet(GFileUtils::loadQssFile(c_scrollAreaQss));
}


GTextEdit::GTextEdit(QWidget *parent)
    : QTextEdit(parent)
{
    initGui();
}

void GTextEdit::initGui()
{
    setStyleSheet(GFileUtils::loadQssFile(c_scrollAreaQss));
}
