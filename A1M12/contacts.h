/* -------------------------------------------
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
Section: IPC144SOO
Date: 23-Oct-17

----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
//Structure Name has three (3) members:  firstName, middleInitial, and lastName. 
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
//Structure Address has five(5) members:  street, streetNumber, apartmentNumber, postalCode, and city.
struct Address
{
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};


// Structure type Numbers declaration
//Structure Numbers has three (3) members:  cell, home, and business. 
struct Numbers
{
	char cell[21];
	char home[21];
	char business[21];
};
