/*multiple classes to behave as singletons,instead of creating many singleton classes ,we can use singuler behaviour in multiple classes*/
template<typename T>
class BaseSingleton
{
	protected:
		BaseSingleton() = default;
		
		BaseSingleton(const BaseSingleton &) = delete;
		BaseSingleton&	operator=(const BaseSingleton&) = delete;
	public:
		static T & Instance(){
		static T instance;
		return instance;
		}

};

class Manager:public BaseSingleton<Manager>{//recurring template pattern
	private:

//#define MAKE_SINGLETON(class_name) private:class_name()=default;\
				     friend class BaseSingleton<class_name> 	
					     
		Manager()=default;//instead can use macro defined above for multiple child classes
		friend class BaseSingleton<Manager>;
	public:
		void Run()
		{
		
		}

};

int main()
{
Manager &gm = Manager::Instance();


return 0;
}

