/**                                                                                        
 *@file prog2.c
 *@brief sample program for determining gross hourly pay (pretax paycheck amount) 
 *@author Timothy Goetsch
 *@date Spring 2020
 *@bugs None yet
 *@todo Incorporate taxes
 */
#include<stdio.h>
#include<stdlib.h>

int main() {

    float hourly_pay;
    float hours_worked;
    float gross_pay;
    char tmp[256];

	/*Collect Hourly Pay from user*/
    printf("Enter your hourly pay-rate: ");
    fgets(tmp, 256, stdin);
    hourly_pay = atoi(tmp);

	/*Collect Hours Worked during this pay-period*/
    printf("Enter the amount of hours you worked this pay-period: ");
    fgets(tmp, 256, stdin);
    hours_worked = atoi(tmp);

	/*Calculate Gross Pay*/
    gross_pay = hourly_pay * hours_worked;

    printf("You made $%.2f this pay-period. Don't forget to do your taxes!\n", gross_pay);
    return 0;
}
