//IT21338120 - WIJESINGHE S.A.A. K
//IT1050_MLB_WE_01.01_06_Blood_Donation_System
// Class of patient
class Patient
{
	protected:// Inheritence relationship
	
		int patientId[20];
		char patientName[50];
		int patientMobile;
		char patientEmail[20];
		char patientUsername[20];
		char patientPassword[20];
		char patientBloodtype[3];
	
	public:
		
		Patient(); //constructor
		Patient( int pId, char pName[], int pMobile, char pEmail[], char pUsername[], char pPwd[], char pBloodType[] );// Overloading constructor
		
		void setaddPatient( const int pId[],const char pName[], int pMobile, char pEmail[],const char pBloodType[] );
		void seteditPatient( int pMobile[], char pEmail[], const char pUsername[], char pPassword[]) ;
		int searchPatient();
		void deletePatient( const int pId[] );
		
		~Patient();//destructor
};
