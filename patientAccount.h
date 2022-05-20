//IT21338120 - WIJESINGHE S.A.A. K
//IT1050_MLB_WE_01.01_06_Blood_Donation_System
//Class of patient account
#define SIZE 2
#define SIZEF 3
class PatientAccount 
{
	private:
		
		int patientId;
		char patientUsername[20];
		char patientPassword[20];
		bool availability[];
		char feedbacks[50];
		
		EmployeeAccount* employees[SIZE];//Bi-Directional Association relationship
		Feedback* F[SIZEF]; //aggregation relationship
	
	public:
		
		PatientAccount(); //constructor
		PatientAccount( int pAId, char pAUsername[], char pAPwd[], bool bAvailability[], char pAFeedback[] ); // Overloading constructor
		
		void CheckingTheBloodInventory();
		void MakingAReservation( AdminAccount* a ); //Dependancy relationship
		
		void GiveFeedbacks( Feedback* F1, Feedback* F2, Feedback* F3 ) //Aggregation relationship
			{
				feedbacks[0] = F1;
				feedbacks[1] = F2;
				feedbacks[2] = F3;
			};
		
		
		~PatientAccount();//destructor
};
