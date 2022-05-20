//IT21272936 - SILVA S.K.D. T 
//IT1050_MLB_WE_01.01_06_Blood_Donation_System
// Class of employee account
#define SIZEP 10
#define SIZED 10
#define SIZEBC 10
class EmployeeAccount
{
	private:
		
		int employeeId;
		char employeeRole[20];
		char reports[50];
		char employeeUsername[20];
		char employeePassword[20];
		
		PatientAccount* patients[SIZEP];//Bi-Directional Association relationship
		DonorAccount* donors[SIZED]; //Bi-Directional Association relationship
		bloodCamp* camps[SIZEBC]; //Bi-Directional Association relationship
	
	public:
		
		EmployeeAccount(); //constructor
		EmployeeAccount( int eAId, char eARole[], char eAReports[], char eAUsername[], char eAPwd[] ); // Overloading constructor
		
		void generateReports( AdminAccount* a ); //Dependancy relationship
		void checkRequests();
		void giveGuidance();
		
		~EmployeeAccount();//destructor
	
};
