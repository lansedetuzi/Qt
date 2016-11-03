#ifndef GSCROLLAREA_H
#define GSCROLLAREA_H

#include <QScrollArea>
#include <QTextEdit>

class GScrollArea : public QScrollArea
{
    Q_OBJECT
public:
    explicit GScrollArea(QWidget *parent = 0);

private:
    void initGui();
};

class GTextEdit : public QTextEdit
{
    Q_OBJECT
public:
    explicit GTextEdit(QWidget *parent = 0);

private:
    void initGui();
};

#endif // GSCROLLAREA_H
