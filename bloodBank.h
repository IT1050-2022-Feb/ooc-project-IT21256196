// Class of blood bank
class bloodBank
{
	private:
		
		char bloodId[20];
		char bloodDonorId[20];
		char bloodPatientId[20];
		char bloodGroup[3];
		char patientEmail[20];
		char patientUsername[20];
		char patientPassword[20];
		char patientBloodtype[3];
		char bloodCells[10];
		char stockID[20];
		char stockBloodtype[3];
		int stockNumber;
		
		PatientAccount* pAccount[]; //composition relationship
		bloodCamp* bCamp[]; //composition relationship
	
	public:
		
		bloodBank(); //constructor
		bloodBank( char bId[], char bDId[], char bPId[], char bGroup[], char pEmail[], char pUsername[], char pPwd[], char pBloodType[], char bCells[], char stId[], char stBloodType[], int sNo ); // Overloading constructor
		
		void setaddblood( char bId[], char bGroup[] );
		void searchblood();
		void setaddstocks( char stId[], char stBloodType[], int sNo, char bId[] );
		void editstocks();
		void searchstocks();
		
		void addPAccout(); //composition relationship
		void hostBloodCamp();//composition relationship
		
		~bloodBank();//destructor
	
};

