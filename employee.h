//Class of employee
class Employee
{
	protected:// Inheritence relationship
	
		int employeeId[20];
		char employeeName[50];
		int employeeMobile;
		char employeeEmail[20];
		char employeeDOB[10];
		char employeeUsername[20];
		char employeePassword[20];
	
	public:
		
		Employee(); //constructor
		Employee( int eId[], char eName[], int eMobile, char eEmail[], char eDOB[], char eUsername[], char ePwd[] );// Overloading constructor
		
		void setaddEmployee(const int eId[],const char eName[], int eMobile, char eEmail[],const char eBloodtype[] );
		void seteditEmployee( int Emobile,const char eMail[],const char eUsername[], char ePwd[]);
		int searchEmployee();
		void deleteEmployee(const int eId[]);
		
		~Employee();//destructor
	
};

