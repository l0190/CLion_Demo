//
// Created by amin on 2023/9/9.
//
#include "stdio.h"
#include "stdlib.h"
#include "Demo1.h"
LinkList Create_List(int n){
    //p表示当前LNode指针
    LNode *p,*head;

    LNode* Update_p(LNode* p){
        LNode* NewNode= (LNode*)malloc(sizeof(LNode));
        scanf("%c",&(NewNode->date));
        if(p!=NULL)p->next=NewNode;
        return NewNode;
    }
    for(int i=0;i<n;i++){
        if(i==0){
            printf("head:");
            head=Update_p(NULL);
            p=head;
        }
        else{
            printf("Node:");
            p=Update_p(p);
        }
        getchar();
    }
    p->next=NULL;
    return head;
}

void Show_List(LinkList head){
    while(head){
        printf("%c ",head->date);
        head=head->next;
    }
    printf("\n");
}

void Reverse_A_B(LNode* A,LNode* B){
    B->next=A;
    A->next=NULL;
}
LinkList ReverseList(LinkList head){
    if(head==NULL||head->next==NULL){
        head->next=NULL;
        return head;
    }
    else{
        //newList指的是反转过来的新链表
        LNode *newList= ReverseList(head->next);
        Reverse_A_B(head,head->next);
        return newList;
    }
}

int main(void )
{
    LinkList list;
    list=Create_List(4);
    printf("list:");
    Show_List(list);
    list=ReverseList(list);
    printf("after ReverseList:");
    Show_List(list);
    return 0;
}