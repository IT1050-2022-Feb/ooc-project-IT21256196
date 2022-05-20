//Class of  Admin Account
class AdminAccount
{
	private:
		
		int adminId;
		char adminStatus[50];
		char adminUsername[20];
		char adminPassword[20];
		char userTypes[10];
	
	public:
		
		AdminAccount(); //Default constructor
		AdminAccount( int aAId, char aAStatus[], char aAUsername[], char aAPwd[], char typeUser[] ); // Overloading constructor
		
		void checkingCredentials();
		void checkingErrors();
		void systemStatus();
		void userRoleHandling();
		
		~AdminAccount();//destructor
};

