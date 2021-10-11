/**                                                                                        
 *@file prog1.c
 *@brief sample program for creating 1 entry in a gradebook
 *@author Timothy Goetsch
 *@date Spring 2020
 *@bugs None yet
 *@todo incorporate dynamic memory allocation, link list instead of array, multiple entries
 */
#include"prelab6.h"

int main() {
    
    struct student_t gradebook[1];
    char buf[256];
    char tmp[256];
    int id;
    int age;
    int grade;
    
    printf("Log your Student Information\n");
    printf("Note this Program does not perform any safety checks.\n");
    
    /*Collect name from user*/
    printf("Enter your name: ");

    //fgets by itself would have left the newline character in the buffer.
    fgets(buf, 256, stdin);

    //sscanf removes the newline character.
    sscanf(buf, "%s", tmp);
    
    /*casting tmp to a pointer allows me to pass the name entry to gradebook, 
    which is expecting a char**. What would happen if I didnt make this cast?*/ 
    char* name = (char*)tmp;       
    
    /*Collect id from user*/  
    printf("Enter your ID: ");
    fgets(buf, 256, stdin);
    id = atoi(buf);

    /*Collect age from user*/
    printf("Enter your age: ");
    fgets(buf, 256, stdin);
    age = atoi(buf);

    /*Collect grade from user*/
    printf("Enter your grade: ");
    fgets(buf, 256, stdin);
    grade = atoi(buf);
    
    /* Add entry to the gradebook */
    add_students(gradebook, &name, &id, &age, &grade, 1);

    /* print entry from gradebook */
    print_gradebook(gradebook, 1);

    return 0;
}
