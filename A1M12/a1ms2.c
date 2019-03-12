/* -------------------------------------------
Name: Mehulkumar Desai
Student number: 110288172
Email: mmdesai@myseneca.ca
Section: IPC144SOO
Date: 23-Oct-17

----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "contacts.h"


int main(void)
{
	// Declaring variables:
	char ans = 'Y';
	struct Name user_name = { "", "", "" }; // strcture NAME initialize
	struct Address user_address = { 0, "", 0, "", "" }; // strcture ADDRESS initialize
	struct Numbers user_contact_numbers = { "", "", "" }; // strcture NUMBERS initialize


	// Display the title
	printf("Contact Management System");
	printf("\n-------------------------");


	// Contact Name Input:
	printf("\nPlease enter the contact's first name: ");
	scanf("%30s", user_name.firstName);
	
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &ans);

	//if user enter the Yes(y) than and than only below condition exicute.
	if ((ans == 'y') || (ans == 'Y'))
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%s", user_name.middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf("%30s", user_name.lastName);



	// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &user_address.streetNumber);

	printf("Please enter the contact's street name: ");
	scanf("%40s", user_address.street);

	printf("Do you want to enter an appartment number? (y or n): ");
	scanf(" %c", &ans);

	//if user enter the Yes(y) than and than only below condition exicute.
	if ((ans == 'y') || (ans =='Y'))
	{
		printf("Please enter the contact's appartment number: ");
		scanf("%d", &user_address.apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]", user_address.postalCode);
	

	printf("Please enter the contact's city: ");
	scanf("%40s", user_address.city);


	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &ans);

	//if user enter the Yes(y) than and than only below condition exicute.
	if ((ans == 'y') || (ans == 'Y'))
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20s", user_contact_numbers.cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &ans);

	//if user enter the Yes(y) than and than only below condition exicute.
	if ((ans == 'y') || (ans == 'Y'))
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %20s", user_contact_numbers.home);
	}


	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &ans);

	//if user enter the Yes(y) than and than only below condition exicute.
	if ((ans == 'y') || (ans == 'Y'))
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %20s", user_contact_numbers.business);
	}


	// Display Contact Summary Details
	printf("\nContact Details");
	printf("\n---------------");
	printf("\nName Details");
	printf("\nFirst name: %s", user_name.firstName);
	printf("\nMiddle initial(s): %s", user_name.middleInitial);
	printf("\nLast name: %s", user_name.lastName);

	printf("\n\nAddress Details");
	printf("\nStreet number: %d", user_address.streetNumber);
	printf("\nStreet name: %s", user_address.street);
	printf("\nApartment: %d", user_address.apartmentNumber);
	printf("\nPostal code: %s", user_address.postalCode);
	printf("\nCity: %s", user_address.city);


	printf("\n\nPhone Numbers:");
	printf("\nCell phone number: %s", user_contact_numbers.cell);
	printf("\nHome phone number: %s", user_contact_numbers.home);
	printf("\nBusiness phone number: %s", user_contact_numbers.business);

	// Display Completion Message
	printf("\n\nStructure test for Name, Address, and Numbers Done!");
        printf("\n"); 
	return 0;
}

