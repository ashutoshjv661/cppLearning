#include<iostream>
//Teribble code style 
//We will improve it further 
class Log
{
    public:
        enum Level{
            LevelError = 0,LevelWarning,LevelInfo
        };
    private: 
        Level m_LogLevel = LevelInfo; //by default 
    public:
        void SetLevel(Level level)
        {
            m_LogLevel = level;
        }
        void Error(const char* message)
        {
            if(m_LogLevel>=LevelError)
            std::cout<<"[ERROR] => "<<message<<std::endl;
        }
        void Warn(const char* message)
        {
            if(m_LogLevel>=LevelWarning)
            std::cout<<"[WARNING] => "<<message<<std::endl;
        }
        void Info(const char* message)
        {
            if(m_LogLevel>=LevelInfo)
            std::cout<<"[INFO] => "<<message<<std::endl;
        }
};
int main()
{
    Log log;
    log.SetLevel(Log::LevelInfo);
    log.Warn("Hello!");
    log.Info("Hello!");
    log.Error("Hello!");
    std::cin.get();
}