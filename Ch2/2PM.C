#include<stdio.h>
#include<conio.h>

void main()
{
  FILE *fp;
  int n = 120, num;
  char data[100];
  clrscr();

  fp = fopen("demo.txt", "a");

  if(fp != NULL)
  {
     printf("File opened successfully...\n");

     fprintf(fp, "%d\n", n);

  }
  else
  {
     printf("File open failed...");
  }

  fclose(fp);

  fp = fopen("demo.txt", "r");

  while(fscanf(fp, "%d", &num) != EOF)
  {
      printf("\n%d\n", num);
  }

  fclose(fp);

  getch();
}












/*
struct Student
{
  int id;            // 2 bytes
  char name[100];    // 100 bytes
  char course[100];  // 100 bytes
  int age;           // 2 bytes
}s[100];  // array of object  s[0], s[1], ...., s[99]

void main()
{
  int i, n;
  clrscr();

  printf("How many students: ");
  scanf("%d", &n);

  for(i=0; i<n; i++)
  {
     printf("Enter id: ");   scanf("%d", &s[i].id);
     printf("Enter name: ");   scanf("%s", &s[i].name);
     printf("Enter course: ");   scanf("%s", &s[i].course);
     printf("Enter age: ");   scanf("%d", &s[i].age);
  }

  for(i=0; i<n; i++)
  {
     printf("%d, %s, %s, %d\n", s[i].id, s[i].name, s[i].course, s[i].age);
  }

  getch();
}
*/