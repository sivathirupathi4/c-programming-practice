#include <stdio.h>
int square(int *ptr);
int cube(int *ptr);
int main(){
    int n;
    scanf("%d",&n);
    int *ptr=&n;
    
    int sq=square(ptr);
    printf("Square is %d\n",sq);
    
    int cu=cube(ptr);
    printf("Cube is %d\n",cu);
    
    return 0;
}
int square(int *ptr){
    int val=*ptr;
    int sq=val*val;
    return sq;
}
int cube(int *ptr){
    int cu=(*ptr)*(*ptr)*(*ptr);
    return cu;
}
