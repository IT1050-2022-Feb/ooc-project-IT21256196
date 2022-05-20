// Implementation of Class blood camp
#define SIZE 5
class bloodCamp
{
	private:
		
		char employee_id[20];
		int date;
		int time;
		char venue[20];
		char theme[100];
		
		EmployeeAccount* employees[SIZE];//Bi-Directional Association relationship
	
	public:
		
		bloodCamp(); //constructor
		bloodCamp( char eId[], int campDate, int campTime, char campVenue[], char campTheme[] );// Overloading constructor
		
		void setPlancamps( int campDate[], int campTime[], char campVenue[], char campTheme[] );
		void GetDetails( AdminAccount* a ); //Dependancy relationship
		void generateReports();
		void CheckRequests( employeeAccount* a ); //Dependancy relationship
		
		~bloodCamp();//destructor
	
};

