#ifndef LOGGER_H
#define LOGGER_H

#include <QFile>
#include <QString>

class Logger
{
public:
    static Logger *getInstance();
    void log(QString message);

    ~Logger();
private:
    QFile *_logFile;
    static Logger *_instance;
    Logger();

};

#endif // LOGGER_H
