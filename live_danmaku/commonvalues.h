#ifndef COMMANDVALUES_H
#define COMMANDVALUES_H

#include <QHash>
#include "livedanmaku.h"

class QSettings;

#if true
#define s8(x) QString(x)
#else
#define s8(x)  QString(x).toStdString().c_str()
#endif

#define snum(x) QString::number(x)

class CommonValues
{
protected:
    static QHash<qint64, QString> localNicknames; // 本地昵称
    static QHash<qint64, qint64> userComeTimes;   // 用户进来的时间（客户端时间戳为准）
    static QHash<qint64, qint64> userBlockIds;    // 本次用户屏蔽的ID
    static QSettings* danmakuCounts; // 保存弹幕次数的settings
    static QList<LiveDanmaku> allDanmakus;
    static QList<qint64> careUsers; // 特别关心
    static QList<qint64> strongNotifyUsers; // 强提醒
    static QHash<QString, QString> pinyinMap; // 拼音
    static QHash<QString, QString> customVariant; // 自定义变量
};

#endif // COMMANDVALUES_H
