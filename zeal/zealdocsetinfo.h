#ifndef ZEALDOCSETINFO_H
#define ZEALDOCSETINFO_H

#include "stdlib.h"
#include <QFile>

struct ZealDocsetInfo
{
public:
    ZealDocsetInfo();
    ZealDocsetInfo(const QString filePath);
    bool readDocset(const QString filePath);

    QString indexPath;
    QString family;
    QString keyword;
};

#endif // ZEALDOCSETINFO_H
