![image](https://github.com/JusDooEt/Linked-List-Recursion-Example/assets/152052216/3a73c853-5028-4fc2-bd01-97eb18c9e842)

# About
This program uses a struct Type named student to create a linked list in the form of a stack. The program will start with an empty stack and will prompt the user to add as many students to the stack as they want. The user will input a student name and id value into the console and the values will be stored in a dynamic student object and added to the top of the stack. When the user decides to stop adding students, the program will display the list from left to right and from right to left. This can also be interpreted as top to bottom and bottom to top of the stack respectively. 

# Functions
## void insertStudent(Student*& head)
This is used to prompt and read the user’s input and create a new student object and adding it to the top of the stack.

## void showLtoR(Student*& head)
This function receives a pointer to the top of the stack and assigns the pointer value to a temporary pointer to iterate through the list. A while loop is used to check if the temporary pointer is equal to NULL and displays the list of students from left to right / top to bottom.

## void showRtoL(Student*& head)
This function has a similar task as the previous function but must use recursive function calls to achieve its task. The recursion base condition is if the temp ptr being recursively passed is equal to NULL. Otherwise, the function will call itself recursively. Once the base condition is met ,when the end of the list is found, the function will output the student list from right to left / bottom to top. 


