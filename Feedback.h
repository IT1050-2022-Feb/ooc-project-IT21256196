//IT21256196 - WIJERATHNA N.T
//IT1050_MLB_WE_01.01_06_Blood_Donation_System
// Class of feedbacks
class Feedback
{
	private:
		
		int feedbackNumber[20];
		char patientId[20];
		char feedback[50];
		
	public:
		
		Feedback(); //constructor
		Feedback( int FBno[], char pId[], char fb[] ); // Overloading constructor
		
		void setGiveFeedbacks( int fBNo[], char pId[], char fb[] );
		
		~Feedback();//destructor
};

