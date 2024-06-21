#include "Logger.h"
#include <QDateTime>

Logger *Logger::_instance = nullptr;

Logger::Logger()
{
    auto filename = QDateTime::currentDateTime().toString("yyyy_MM_dd_hh_mm_ss") +".txt";
    _logFile = new QFile(filename);
    _logFile->open(QFile::WriteOnly);
}

Logger *Logger::getInstance()
{
    if(_instance == nullptr)
    {
        _instance = new Logger();
    }
    return _instance;
}

void Logger::log(QString message)
{
    auto log = QString("%0 -- %1 \n").arg(QDateTime::currentDateTime().toString()).arg(message);
    _logFile->write(log.toUtf8());
    _logFile->flush();
}

Logger::~Logger()
{
    _logFile->close();
    delete _logFile;
}
