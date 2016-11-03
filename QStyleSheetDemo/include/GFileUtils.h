#ifndef GFILEUTILS_H
#define GFILEUTILS_H

#include <QString>


class GFileUtils
{
public:
    GFileUtils();

public:
    static QString loadQssFile(const QString &qssFile = QString());
};

#endif // GFILEUTILS_H
