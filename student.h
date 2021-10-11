/**                                                                                        
 *@file student.h
 *@brief header file for prelab6.c and student.c 
 *@author Timothy Goetsch, Matthew Dudek
 *@date Spring 2020
 *@bugs None yet
 *@todo 
 */
#ifndef STUDENT_H
#define  STUDENT_H

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define NAME_SIZE 10
#define GRADE_BOOK_MAX 5

struct student_t {
    char name[NAME_SIZE];
    int id;
    int age;
    int grade;
};

void add_students(struct student_t* gradebook, char** names, int* ids, int* ages, int* grades, int struct_len);
void print_gradebook(struct student_t*, int struct_len);
#endif
