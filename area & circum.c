/*
Student Name:Diwakar kandel
Subject:programming fundamental
Roll No:
Lab No:01
Program:WAP to print simple interest.
Date:Nov18,2016
*/
#include<stdio.h>
#define pi 3.14
int main()
{
float r,area,circum;
printf("Enter the radius:\n");
scanf("%f",& r);
area=pi*r*r;
circum=2*pi*r;
printf("\n area of circle of %f",area);
printf("\n circum of circle of %f",circum);
return 0;
}
