/*
Use Structure for the folowing

    Name:

    Email:

    Phone:
*/

#include<stdio.h>
#include<string.h>

struct person{
char name [50];
char email[50];
char phone[15];

}arefin;

int main(){

strcpy(arefin.name, "Shahriar Arefin");
strcpy(arefin.email, "arefin35-1018@diu.edu.bd");
strcpy(arefin.phone, "+8801630568502");
printf("\n Name: %s \n Email: %s \n Phone: %s",arefin.name,arefin.email,arefin.phone);


return 0;
}