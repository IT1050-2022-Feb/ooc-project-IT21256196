//Class of Admin
class Admin
{
	protected:// Inheritence relationship
	
		int adminId;
		char adminName[50];
		int adminMobile[10];
		char adminEmail[20];
		char adminUsername[20];
		char adminPassword[20];
		char adminDOB[10];
	
	public:
		Admin();//Default constructor
		Admin( int aId, const char aName[], int aMobile[], char aEmail[], char aUsername[], char aPwd[], const char aBOD[] ); // Overloading constructor
		
		void seteditAdmin(const int aMobile[],const char aEmail[],const char aUsername[],const char apwd[]);
		void advertiseCamps();
		void controlAccounts();
		
		~Admin(); //destructor
};

