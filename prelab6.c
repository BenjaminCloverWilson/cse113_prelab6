/**
 *@file prelab6.c
 *@brief sample program for creating a gradebook from an array of structs.
 *@author Timothy Goetsch
 *@date Spring 2020
 *@bugs None yet
 *@todo make interactive, incorporate dynamic memory allocation, link list instead of array
 */
#include"student.h"


int main(){

    struct student_t gradebook[GRADE_BOOK_MAX];
    char* names[GRADE_BOOK_MAX] = {"Shirley","Geronimo","Vivian","Adina","Bronson"};
    int ids[GRADE_BOOK_MAX] = {90081294, 90021378, 90048396, 90094945, 90012172};
    int ages[GRADE_BOOK_MAX] = {20, 22, 18, 19, 25};
    int grades[GRADE_BOOK_MAX] = {72, 78, 22, 58, 92};

    /**
     * add students to gradebook
     */
    add_students(gradebook, names, ids, ages, grades, GRADE_BOOK_MAX);    
    
    /**
     * print gradebook info
     */
    print_gradebook(gradebook, GRADE_BOOK_MAX);
    
    return 0;
}
