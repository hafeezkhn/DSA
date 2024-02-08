#include"iostream"
using namespace std;
/*class has only one instance,
 * if we create class which manages underlying resource,
 * if we have multiple instances each instace will store its own state of the underlying resource 
 * and if one instace modify other instance will not know about it
 */

 class Singleton{
        Singleton()=default; //disable constructor by making it private
	static Singleton m_Instance;//create static instance of client
	 public:
	 static Singleton & Instance();//give created instance to client 
	 void MethodA();//other methods
	 void MethodB();//other methods

	
 };

Singleton Singleton::m_Instance;//define static instance
Singleton& Singleton::Instance(){
	return m_Instance;
}

int main()
{
Singleton &s = Singleton::Instance();
//Singleton s2; its error

}

