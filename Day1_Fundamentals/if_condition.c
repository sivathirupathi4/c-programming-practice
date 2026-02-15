#include <stdio.h>
int main ()
{
    int amount;
    int notes=0;
    int count=0;
    printf("Enter the amount:");
    scanf("%d", &amount);
    if(amount>=500)
    { 
    notes=amount/500;
       printf("%d x 500=%d\n",notes,notes*500);
       amount=amount%500;
       count=count + notes;
    }
    
    if(amount>=200)
    { 
    notes=amount/200;
       printf("%d x 200=%d\n",notes,notes*200);
       amount=amount%200;
       count=count + notes;
    }
    if(amount>=100)
    { 
    notes=amount/100;
       printf("%d x 100=%d\n",notes,notes*100);
       amount=amount%100;
       count=count + notes;
    }
    if(amount>=50)
    { 
    notes=amount/50;
       printf("%d x 50=%d\n",notes,notes*50);
       amount=amount%50;
       count=count + notes;
    }
    if(amount>=20)
    { 
    notes=amount/20;
       printf("%d x 20=%d\n",notes,notes*20);
       amount=amount%20;
       count=count + notes;
    }
    if(amount>=10)
    { 
    notes=amount/10;
       printf("%d x 10=%d\n",notes,notes*10);
       amount=amount%10;
       count=count + notes;
    }if(amount>=5)
    { 
    notes=amount/5;
       printf("%d x 5=%d\n",notes,notes*5);
       amount=amount%5;
       count=count + notes;
    }if(amount>=2)
    { 
    notes=amount/2;
       printf("%d x 2=%d\n",notes,notes*2);
       amount=amount%2;
       count=count + notes;
    }if(amount>=1)   { 
    notes=amount/1;
       printf("%d x 1=%d\n",notes,notes*1);
       amount=amount%1;
       count=count + notes;
    }

}
