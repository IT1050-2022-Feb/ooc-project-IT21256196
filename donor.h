//IT21256196 - WIJERATHNA N.T
//IT1050_MLB_WE_01.01_06_Blood_Donation_System
//Class of donor
class Donor
{
	protected:// Inheritence relationship
	
		char donorId[20];
		char donorName[50];
		int dornMobile;
		char donorEmail[20];
		char donorUsername[20];
		char donorPassword[20];
		char donorBloodtype[3];
	
	public:
		
		Donor(); //Default constructor
		Donor( char dId[], char dName[], int dMobile, char dEmail[], char dUsername[], char dPwd[], char dBloodType[] );// Overloading constructor
		
		void setaddDonor(const char dId[],const char dName[], int dMobile, char dEmail[],const char dBloodType[] );
		void seteditDonor(const int dMobile,const char dEmail[],const char dUsername[],const char dPassword[]);
		int searchDonor();
		void deleteDonor(const int did[]);
		
		~Donor();//destructor
	
};

