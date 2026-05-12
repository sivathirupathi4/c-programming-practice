#include <stdio.h>
struct student{
    char name[40];
    int age;
    int roll;
};
int main(){
    struct student stud_list1={"siva",43,10053};
    struct student stud_list2;
    
    printf("name: ");
    scanf(" %[^\n]",stud_list2.name);
    
    printf("age: ");
    scanf("%d",&stud_list2.age);
    
    printf("roll: ");
    scanf("%d",&stud_list2.roll);
    
    printf("Student details 1\n");
    printf("%s \n%d\n%d\n",stud_list1.name,stud_list1.age,stud_list1.roll);
    
    printf("Student details 2\n");
    printf("%s \n%d\n%d\n",stud_list2.name,stud_list2.age,stud_list2.roll);
    return 0;
}
