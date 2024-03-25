/*************************************************
* Program: Lab #6b - Source.cpp
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/
#include "Student.h"

void insertStudent(Student*& head);
void showLtoR(Student*& head);
void showRtoL(Student*& head);

int main()
{
	char answer = '\0';
	Student* head = nullptr;

	cout << "Insert a student record (Y or N)?  ";
	cin >> answer;

	while (toupper(answer) == 'Y')
	{
		insertStudent(head);
		cout << "Insert another record into the list (Y or N):  ";
		cin >> answer;
		system("cls");		// if using a Mac, ignore this statement.
	}
	if (head == nullptr)
	{
		cout << "The list is empty.\n\n";
		return 0;
	}
	cout << "Here is the list of students from left to right:\n";
	showLtoR(head);

	system("pause");
	system("cls");

	cout << "Here is the list of students from right to left:\n";
	showRtoL(head);
	system("pause");

	return 0;
}

// --------------------------
// InsertStudent function
void insertStudent(Student*& head)
{
	Student* temp = new Student;

	cout << "ID:  ";
	cin >> temp->id;
	cout << "Name:  ";
	cin.ignore();
	getline(cin, temp->name);
	temp->next = head;

	head = temp;
}
// --------------------------



// --------------------------
// Function to show the list from left to right
void showLtoR(Student*& head)
{
	Student* temp = head;
	while (temp != NULL)
	{
		cout << temp->id << endl;
		cout << temp->name << endl
			<< endl;

		temp = temp->next;
	}
}




// --------------------------




// --------------------------
// Recursive function to show list from right to left
void showRtoL(Student*& head)
{
	Student* temp = head;
	if (temp == NULL)
		return;

	showRtoL(temp->next);

	cout << temp->id << endl;
	cout << temp->name << endl
		<< endl;
}
// --------------------------

/* OUTPUT
Insert a student record (Y or N)?  y
ID:  100
Name:  Tom Lee
Insert another record into the list (Y or N):  y

ID:  101
Name:  Bruce Lee
Insert another record into the list (Y or N):  y

ID:  102
Name:  Sara Lee
Insert another record into the list (Y or N):  n

Here is the list of students from left to right:
102
Sara Lee

101
Bruce Lee

100
Tom Lee

Press any key to continue . . .

Here is the list of students from right to left:
100
Tom Lee

101
Bruce Lee

102
Sara Lee

Press any key to continue . . . */