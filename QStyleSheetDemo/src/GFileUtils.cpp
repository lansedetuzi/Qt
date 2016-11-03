#include "GFileUtils.h"

#include <QFile>

GFileUtils::GFileUtils()
{

}

QString GFileUtils::loadQssFile(const QString &qssFile)
{
    QFile oQssFile(qssFile);
    if (!oQssFile.open(QFile::ReadOnly))
    {
        return QString();
    }
    else
    {
        QString sQssStyle = QString::fromLatin1(oQssFile.readAll());
        oQssFile.close();
        return sQssStyle;
    }
}

