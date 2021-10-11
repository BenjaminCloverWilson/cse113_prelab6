/**                                                                                        
 *@file student.c
 *@brief functions for initializing an array of structs and printing that array out 
 *@author Timothy Goetsch
 *@date Spring 2020
 *@bugs None yet
 *@todo make interactive, incorporate dynamic memory allocation, link list instead of array,
 * simple functions like average grade, finding students through struct members (i.e. id, age, grade)
 */
#include"student.h"

void add_students(struct student_t* gradebook, char** names, int* ids, int* ages, int* grades, int struct_len) {
    for(int i = 0; i < struct_len; i++) {
        strncpy(gradebook[i].name, names[i], NAME_SIZE);
        gradebook[i].id = ids[i];
        gradebook[i].age = ages[i];
        gradebook[i].grade = grades[i];
    }
}

void print_gradebook(struct student_t* gradebook, int struct_len) {
    for(int i = 0; i < struct_len; i++) {
        printf("%s, ID:%d, age:%d, grade:%d%%\n",gradebook[i].name, gradebook[i].id, gradebook[i].age, gradebook[i].grade);
    }
}
