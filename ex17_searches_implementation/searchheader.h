 #include<stdio.h>
 #include<string.h>
 int max,count1=0;
 struct emp
 {
 	char name[30];
 	int id;
 	int sal;
 }ob[5],t;
 
 void input();
 void sort();
 void display(struct emp);
 void searchname(char[]);
 void searchid(int,int,int);
