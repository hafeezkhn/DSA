/*example: create logger class that will use to log different states of the application as it executes this way if application crashes we can examine logs
 * */
#include<iostream>
#include<string>
#include<cstdio>
class Logger{
 
 FILE *m_pStream;
 std::string m_Tag;
 Logger();
 static Logger m_Instance;

 public:
 	Logger(const Logger&) = delete;
	Logger& operator=(const Logger&)=delete;
	static Logger & Instance(){
		return m_Instance;
	}
	~Logger();
	void Writelog(const char *pMessage);
	void SetTag(const char *pTag);//written along with msg logged in to file
};

Logger::Logger(){

	std::cout<<__FUNCSIG__<<std::endl;
m_pStream = fopen("applog.txt","w");
}


Logger::~Logger(){
	std::cout<<__FUNCSIG__<<std::endl;
fclose(m_pStream);
}


void Logger::Writelog(const char *pMessage){
fprintf(m_pStream,"[%s] %s\n",m_Tag.c_str(),pMessage);
fflush(m_pStream);
}


void OpenConnection(){
Logger lg = Logger::Instance();
lg.Writelog("Attempting to open a connection");
}


Logger Logger::m_Instance;
int main()
{
Logger &lg=Logger::Instance();
lg.Writelog("App has stared");
OpenConnection();
lg.Writelog("App is shutting");
}
