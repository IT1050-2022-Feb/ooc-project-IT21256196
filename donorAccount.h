// Implementation of Class donor account
#define SIZE 2
class DonorAccount 
{
	private:
		
		char donorId[20];
		char donorUsername[20];
		char donorPassword[20];
		char date[10];
		int time[5];
		char venue[20];
		
		EmployeeAccount* employees[SIZE];//Bi-Directional Association relationship
	
	public:
		
		DonorAccount(); //constructor
		DonorAccount( char dAId[], char dAUsername[], char dAPwd[], int reserveDate[], int reserveTime[], char reserveVenue[] ); // Overloading constructor
		
		void CheckUserCredentials();
		void setDateTimeVenue( int reserveDate[], int reserveTime[], char reserveVenue[] );
		void requestAGuider( AdminAccount* a ); //Dependancy relationship
		
		~DonorAccount();//destructor
	
};

