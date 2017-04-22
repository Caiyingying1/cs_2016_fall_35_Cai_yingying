#include "stdio.h"   
#include "string.h"
#include "ctype.h"     
#include "stdlib.h"   
#include "io.h"  
#include "math.h"  
#include "time.h"
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 
typedef int Status;
typedef int ElemType;
Status visit(ElemType c)
{
    printf("%d ",c);
	return OK;
}
 typedef struct Node
 {
     ElemType data;
    struct Node *next;
 }Node;
 typedef struct Node *LinkList; 
 Status InitList(LinkList *L) 
 { 
    *L=(LinkList)malloc(sizeof(Node));
	if(!(*L)) 
	    return ERROR; 
	(*L)->next=NULL;    
	return OK;
}
Status ListEmpty(LinkList L)
{
    if(L->next)  
	        return FALSE; 
		else      
		    return TRUE;
}Status ClearList(LinkList *L)
{
 	LinkList p,q;
	p=(*L)->next; 
	while(p)                
	{
		q=p->next;
		free(p);	
		p=q;
	}
	(*L)->next=NULL;        
	return OK;
}
int ListLength(LinkList L)
{
    int i=0; 
   LinkList p=L->next; 
   while(p)                            
   {     
      i++;    
      p=p->next;
    } 
	return i;
}
Status GetElem(LinkList L,int i,ElemType *e)
{	int j;
	LinkList p;	
	p = L->next;	
	j = 1;	
	while (p && j<i) 
	{ 
		p = p->next;  
		++j;
	}
	if ( !p || j>i ) 	
		return ERROR; 
	*e = p->data;  
	return OK;
}
int LocateElem(LinkList L,ElemType e)
{
    int i=0;
    LinkList p=L->next;  
    while(p) 
   {    
       i++;     
	   if(p->data==e)      
             return i;    
	    p=p->next;    
	}
    return 0;
}
Status ListInsert(LinkList *L,int i,ElemType e)
{ 
	int j;
	LinkList p,s;
	p = *L; 
  	j = 1;
	while (p && j < i)    
	{		
	     p = p->next;
		++j;
	} 	
	if (!p || j > i) 	
		return ERROR;  
	s = (LinkList)malloc(sizeof(Node)); 
	s->data = e;  
	s->next = p->next;     
	p->next = s;          
	return OK;}
Status ListDelete(LinkList *L,int i,ElemType *e) 
{ 
	int j;
	LinkList p,q;
	p = *L;
	j = 1;
	while (p->next && j < i)
	{   
     p = p->next;  
	 ++j;
	}
	if (!(p->next) || j > i) 
		return ERROR;     
	q = p->next;
	p->next = q->next;		
	*e = q->data;       
	free(q);        
	return OK;
}
int deleteNodeBehind(Node* p) 
{ 
 Node* temp  = NULL;
    if (p == NULL) {
        return -1;
    }
    if (p->next == NULL) {
        return 1;
    }
    temp = p->next;
    p->next = p->next->next;
    free(temp);
    return 0;
}

Status ListTraverse(LinkList L)
{ 
   LinkList p=L->next; 
   while(p)    
   {
       visit(p->data);     
	   p=p->next;    
	}  
    printf("\n");   
    return OK;
}
void CreateListHead(LinkList *L, int n)
{
 	LinkList p;
	int i;
	srand(time(0));                       
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;                    
	for (i=0; i<n; i++) 
	{
		p = (LinkList)malloc(sizeof(Node)); 
		p->data = rand()%100+1;    
		p->next = (*L)->next;    
		(*L)->next = p;	
	}
}
void CreateListTail(LinkList *L, int n)
{
	LinkList p,r;	
	int i;	
	srand(time(0));                     
    *L = (LinkList)malloc(sizeof(Node)); 	
	r=*L;                               
	for (i=0; i<n; i++) 	
	{
		p = (Node *)malloc(sizeof(Node)); 		
		p->data = rand()%100+1;           
		r->next=p;              
		r = p;                           
	}	
	r->next = NULL;          
}
int main()
{        
    LinkList L;    
	ElemType e;    
	Status i;    
	int j,k;    
	i=InitList(&L);    
	printf(":ListLength(L)=%d\n",ListLength(L));    
	for(j=1;j<=6;j++)      
         i=ListInsert(&L,1,j);
    printf("input 1~5:L.data=");    
	ListTraverse(L);     
	printf("ListLength(L)=%d \n",ListLength(L));    
	i=ListEmpty(L);    
	printf("Lempty:i=%d(1:yes 0:no)\n",i);
	
	i=ClearList(&L);    
	printf("empty L:ListLength(L)=%d\n",ListLength(L));
    i=ListEmpty(L);    
	printf("Lempty:i=%d(1:yes 0:no)\n",i);
	   
    for(j=1;j<=9;j++)        
	     ListInsert(&L,j,j);
    printf("behind L input 1~9 :L.data=");
    ListTraverse(L);     
	printf("ListLength(L)=%d \n",ListLength(L));
	   
	ListInsert(&L,1,0);    
	printf("befor L input 0:L.data=");
    ListTraverse(L);     
	printf("ListLength(L)=%d \n",ListLength(L));   
	
	GetElem(L,6,&e);    
	printf("5 element:%d\n",e);    
	for(j=3;j<=5;j++)   
    {       
         k=LocateElem(L,j);         
	     if(k)                  
		        printf("the%d element%d\n",k,j);
         else                
		        printf("no element%d\n",j);    
    }   
    k=ListLength(L);    
	for(j=k+1;j>=k;j--)    
	{        
	    i=ListDelete(&L,j,&e);             
		if(i==ERROR)                    
		printf("delete%dfaild\n",j); 
        else                 
		    printf("delete%d is:%d\n",j,e);    
	}    
	printf("output the L element in turn:");    
	ListTraverse(L);    
	
    j=6;    
	ListDelete(&L,j,&e);    
	printf("delete the %d element :%d\n",j,e);
	printf("output the L element in turn:"); 
	ListTraverse(L);     
	i=ClearList(&L);   
    printf("\emptied L:ListLength(L)=%d\n",ListLength(L));   
	CreateListHead(&L,20);    
	printf("overall created element(head method):");   
    ListTraverse(L);     
	i=ClearList(&L);    
	printf("\n deleted L= :ListLength(L)=%d\n",ListLength(L));    
	CreateListTail(&L,20);    
	printf("overall created element(tail isert method):");    
	ListTraverse(L);     
	return 0;
}



