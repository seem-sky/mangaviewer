#ifndef COMMON_H
#define COMMON_H
#include <QString>
#include <QRegExp>
#include <QDebug>
#include <QStringList>
namespace Manga{
enum splitType{SPLIT_AUTO,SPLIT_NONE,SPLIT_ALWAYS};
}
template <typename T>
class Singleton
{
public:
    Singleton()
    {
    }

    virtual ~Singleton()
    {
    }

    static T* getInstance()
    {
        static T instance;
        return &instance;
    }
};
bool fileNameLessThan(const QString &s1, const QString &s2);
#endif // COMMON_H
