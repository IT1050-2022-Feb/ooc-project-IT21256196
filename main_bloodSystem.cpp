#include <iostream>
#include <string.h>

#include "Admin.h"
#include "AdminAccount.h"
#include "Donor.h"
#include "donorAccount.h"
#include "Patient.h"
#include "patientAccount.h"
#include "Employee.h"
#include "employeeAccount.h"
#include "bloodBank.h"
#include "bloodCamp.h"
#include "Feedback.h"

using namespace std;

int main()
{
	//defining pointers
	Admin* systemAdmin_1;
	
	//create dynamic objects of Admin class using overloading constructor
	systemAdmin_1 = new Admin( "001", "Lakshan", "0774567099", "lakshan99@gmail.com", "A_Lakshan", "Abcd@1234", "1999-08-10" );
	
	
	
	//defining pointers
	Donor* donor_1;
	
	//create dynamic objects of Donor class using overloading constructor
	donor_1 = new Donor( "D001", "Ishini", "0764522376", "ish21@gmail.com", "D_Ishini", "Qwert@4321", "B+" );
	
	
	
	//defining pointers
	Patient* patient_1;
	
	//create dynamic objects of Patient class using overloading constructor
	patient_1 = new Patient( "1001", "Ravindu", "071342134", "Ravi2001@gmail.com", "P_ravindu","Asdf@2001", "O+" );
	
	
	
	//defining pointers
	Employee* employee_1;
	
	//create dynamic objects of Employee class using overloading constructor
	employee_1 = new Employee( "02001", "Nethmi", "0774127890", "nethu@gmail.com", "2001-07-12", "E_Nethmi", "NeTh@#2001" );

	
	
	//defining pointers
	AdminAccount* AA_1;
	
	//create dynamic objects of AdminAccount class using overloading constructor
	AA_1 = new AdminAccount( "001", "System_Admin of blood system", "A_Lakshan", "Abcd@1234", "System_Admin");

	
	
	//defining pointers
	DonorAccount* DA_1;
	
	//create dynamic objects of DonorAccount class using overloading constructor
	DA_1 = new DonorAccount( "DA001", "D_Ishini", "Qwert@4321", "2022-05-12", "14.00", "Panadura" );
	
	
	
	//defining pointers
	PatientAccount* PA_1;
	
	//create dynamic objects of PatientAccount class using overloading constructor
	PA_1 = new PatientAccount( "1001", "P_ravindu", "Asdf@2001", "True", "Good" );
	
	
	
	//defining pointers
	EmployeeAccount* EA_1;
	
	//create dynamic objects of EmployeeAccount class using overloading constructor
	EA_1 = new EmployeeAccount( "02001", "Lab-Docotor", "Blood-reports,daily-reports", "E_Nethmi", "NeTh@#2001" );
	
	
	
	//defining pointers
	bloodCamp* Camp_1;
	
	//create dynamic objects of bloodCamp class using overloading constructor
	Camp_1 = new bloodCamp( "02001", "24", "08.00", "Panadura", "Give blood save life" );
	
	
	
	
	//defining pointers
	bloodBank* BlooBank_1;
	
	//create dynamic objects of bloodBank class using overloading constructor
	BlooBank_1 = new bloodBank( "B112", "D001", "1001", "B+", "Ravi2001@gmail.com", "P_ravindu" , "Asdf@2001", "O+", "point11", "ST098", "AB+", "98" );
	
	
	
	//defining pointers
	Feedback* F1;
	
	//create dynamic objects of Feedback class using overloading constructor
	F1 = new Feedback( "100", "1001", "Good work" );



		//Manually (delete) Remove pointers
		
		delete systemAdmin_1;
		delete donor_1;
		delete patient_1;
		delete employee_1;
		delete AA_1;
		delete DA_1;
		delete PA_1;
		delete EA_1;
		delete Camp_1;
		delete BlooBank_1;
		delete F1;
	
	
	return 0;
}

