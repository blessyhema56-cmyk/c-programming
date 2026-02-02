#include <stdio.h>
#include <stdlib.h>

struct contact {
    long int number;
    struct contact *next;
};


int main() {
    struct contact *head = NULL, *temp;
    struct contact *ct1 = (struct contact *)malloc(sizeof(struct contact));
    struct contact *ct2 = (struct contact *)malloc(sizeof(struct contact));
    struct contact *ct3 = (struct contact *)malloc(sizeof(struct contact));

    // Assign values
    ct1->number = 9966003933;
    ct2->number = 9876543210;
    ct3->number = 8056856074;

    ct1->next = NULL;
    ct2->next = NULL;
    ct3->next = NULL;
    head = ct1;
    
    temp = head;
    while(temp->next != NULL)
    temp = temp->next;
    temp->next = ct2;
    
    temp=head;
    while(temp->next !=NULL)
    temp = temp->next;
    temp->next = ct3;
    
    printf("Contact: \n");
    temp =head;
 temp =head;
    while(temp != NULL){
        printf("%ld ->",temp->number);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}
Output

Output
Status :Successfully executed
Time:
0.0000 secs
Memory:
1.632 Mb
Your Output
Contact: 
9966003933 ->9876543210 ->8056856074 ->NULL

PROBLEM 1.
#include <stdio.h>
#include<stdlib.h>
struct contact {
    long int number;

    struct contact *next;

};
int main() {
    
    struct contact *head=NULL;
     struct contact *n1 = (struct contact*)malloc(sizeof(struct contact));

     struct contact *n2 = (struct contact*)malloc(sizeof(struct contact));
     
       struct contact *n3 = (struct contact*)malloc(sizeof(struct contact));
        struct contact *n4 = (struct contact*)malloc(sizeof(struct contact));

     n1->number = 30;

     n2->number = 20;
     n3->number = 10;
     
    n1->next = head;
    head =n1;
    n2->next = head;
    head = n2;
    n3->next = head;
    head = n3;
    
    
   

     printf("Contact Numbers\n");
     

     while(head != NULL){

         printf("%ld-->",head->number);

         head = head->next;

     }
     
     printf("\nafter adding\n");
        n4->number = 5;
        
         n1->next = head;
    head =n1;
    n2->next = head;
    head = n2;
    n3->next = head;
    head = n3;
      n4->next = head;
        head  = n4;
        
        
        
     while(head != NULL){

         printf("%ld-->",head->number);

         head = head->next;

     }
    return 0;

}
OUTPUT
Output
Status :Successfully executed
Time:
0.0000 secs
Memory:
1.5 Mb
Your Output
Contact Numbers
10-->20-->30-->
after adding
5-->10-->20-->30-->


include <stdio.h>
#include<stdlib.h>
struct contact {
    long int number;

    struct contact *next;

};
int main() {
    
    struct contact *head, *temp, *newcontact;
    
    head = malloc(sizeof(struct contact));
    head->number = 9842009639;
    
    head->next = malloc(sizeof(struct contact));
    head->next->number = 9842089639;
    
    head->next->next = malloc(sizeof(struct contact));
    head->next->next->number = 9842889639;
    head->next->next->next = NULL;
    
    newcontact = malloc(sizeof(struct contact));
    newcontact->number = 9965003933;
    
    temp=head;
    while(temp !=NULL && temp->number !=9842089639)
    temp=temp->next;
    if(temp != NULL)
    newcontact->next = temp->next;
    temp->next = newcontact;
    
    temp=head;
    while(temp != NULL){
        printf("%ld -->",temp->number);
        temp = temp->next;
    }
    printf("Finish");
    return 0;

}

    Output
Status :Successfully executed
Time:
0.0000 secs
Memory:
1.576 Mb
Your Output
9842009639 -->9842089639 -->9965003933 -->9842889639 -->Finish

#include <stdio.h>
#include<stdlib.h>
struct contact {
    long int number;

    struct contact *next;

};
int main() {
    
    struct contact *head, *temp, *newcontact,*previous;
    
    head = malloc(sizeof(struct contact));
    head->number = 9842009639;
    
    head->next = malloc(sizeof(struct contact));
    head->next->number = 9842089639;
    
    head->next->next = malloc(sizeof(struct contact));
    head->next->next->number = 9842889639;
    head->next->next->next = NULL;
    
    newcontact = malloc(sizeof(struct contact));
    newcontact->number = 9965003933;
    
    temp=head;
    while(temp !=NULL && temp->number !=9842089639)
    temp=temp->next;
    
    if(temp != NULL)
    newcontact->next = temp->next;
    temp->next = newcontact;
    
    temp=head;
    while(temp != NULL){
        printf("%ld -->",temp->number);
        temp = temp->next;
    }
    
    long int deletenumber = 9965003933;
    temp = head;
    previous = NULL;
    while(temp != NULL && temp->number != deletenumber){
        previous = temp;
        temp = temp->next;
    }
    if(temp != NULL){
        previous->next = temp->next;
        free(temp);
    }
    printf("\nAfter deleting: ");
    temp = head;
    while(temp != NULL){
        printf("%ld -->",temp->number);
        temp = temp->next;
    }
    printf("Finish");
    return 0;

}

OUTPUT

9842009639 -->9842089639 -->9965003933 -->9842889639 -->
After deleting: 9842009639 -->9842089639 -->9842889639 -->Finish

