/**                                                                                        
 *@file prelab6.h
 *@brief header file for prelab6.c and student.c 
 *@author Timothy Goetsch
 *@date Spring 2020
 *@bugs None yet
 *@todo 
 */
#ifndef PRELAB6_H
#define  PRELAB6_H

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
} gradebook[GRADE_BOOK_MAX];

int average_grade(int* grades, size_t len);
void add_students(struct student_t* gradebook, char** names, int* ids, int* ages, int* grades, int struct_len);
void print_gradebook(struct student_t*, int struct_len);
#endif
