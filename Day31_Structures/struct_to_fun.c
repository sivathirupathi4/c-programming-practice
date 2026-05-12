#include<stdio.h>
struct student{
    char name[50];
    int age;
    int marks;
};
void passbyval(struct student s1);
void passbyref(struct student *s1);
int main(){
    struct student s1={"siva",34,43};
    passbyval(s1);
    printf("rolll %d",s1.marks);
    passbyref(&s1);
    printf("rooll %d",s1.marks);
    return 0;
}
void passbyval(struct student s1){
    printf("%s %d %d\n",s1.name,s1.age,s1.marks);
    s1.marks=0;
}
void passbyref(struct student *s1){
    s1->marks=95;
}
