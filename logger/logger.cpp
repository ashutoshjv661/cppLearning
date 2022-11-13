#include<iostream>
//Teribble code style 
//We will improve it further 
class Log
{
    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo= 2; //for trace
    private: 
        int m_LogLevel = LogLevelInfo; //by default 
    public:
        void SetLevel(int level)
        {
            m_LogLevel = level;
        }
        void Error(const char* message)
        {
            if(m_LogLevel>=LogLevelError)
            std::cout<<"[ERROR] => "<<message<<std::endl;
        }
        void Warn(const char* message)
        {
            if(m_LogLevel>=LogLevelWarning)
            std::cout<<"[WARNING] => "<<message<<std::endl;
        }
        void Info(const char* message)
        {
            if(m_LogLevel>=LogLevelInfo)
            std::cout<<"[INFO] => "<<message<<std::endl;
        }
};
int main()
{
    Log log;
    log.SetLevel(log.LogLevelInfo);
    log.Warn("Hello!");
    log.Info("Hello!");
    log.Error("Hello!");
    std::cin.get();
}