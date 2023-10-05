#include<iostream>
using namespace std;

struct node
{
  
int data;
   
struct node *next;
 
};

struct node *start = NULL;

void
insert_beg ()
{
  
struct node *newnode = new (node);
  
cout << "enter the element in node" << endl;
  
cin >> newnode->data;
  
if (start == NULL)
    {
      
start = newnode;
      
newnode->next = NULL;
    
}
  
  else
    {
      
newnode->next = start;
      
start = newnode;
    
 
}
  
cout << "you have entered element at the begin" << endl;

}


void
insert_pos ()
{
  
struct node *newnode = new (node);
  
int item, pos;
  
cout << "enter the item" << endl;
  
cin >> item;
  
newnode->data = item;
  
cout << "enter the position" << endl;
  
cin >> pos;
  
if(start==NULL){
    if(pos==1){
        start=newnode;
        newnode->next=NULL;
    }
    else{
        cout<<"not a valid position"<<endl;
    }
}
else{
    struct node*curptr=start;
    int len=0;
    while(curptr!=NULL){
        len++;
        curptr=curptr->next;
    }
    curptr=start;
    if(pos>0&&pos<=len){
        for(int i=0;i<pos-2;i++){
            curptr=curptr->next;
        }
        newnode->next=curptr->next;
        curptr->next=newnode;
    }
    else{
        cout<<"you have entered invalid position"<<endl;
    }
}

}


 
 
 
void
insert_last ()
{
  
struct node *newnode = new (node);
  
int item;
  
cout << "enter the element" << endl;
  
cin >> item;
  
newnode->data = item;
  
newnode->next = NULL;
  
if (start == NULL)
    {
      
start = newnode;
    
 
}

  
  else
    {
      
struct node *curptr = start;
      
while (curptr->next != NULL)
	{
	  
curptr = curptr->next;
	
}
      
curptr->next = newnode;
    
 
}
  
cout << "you have inseted the element at the end" << endl;

}


void
display ()
{
  
struct node *curptr = start;
  
while (curptr != NULL)
    {
      
cout << curptr->data<<" ";
      
curptr = curptr->next;
    
}
  
cout << "all the element are printed" << endl;

}


void
delete_begin ()
{
  
if (start == NULL)
    {
      
cout << "no link list is present" << endl;
    
}
  
  else
    {
      
struct node *curptr = start;
      
start = curptr->next;
      
free (curptr);
    
} 
cout << "node has been deleted at the begin" << endl;

} 
void

delete_pos ()
{
  
if (start == NULL)
    {
      
cout << "no link is preset" << endl;
    
}
else if(start->next==NULL){
    struct node * curptr=start;
    start=NULL;
    free(curptr);

}
  
  else
    {
      
int pos;
      
cout << "enter the position" << endl;
      
cin >> pos;
      
int len = 0;
      
struct node *curptr = start, *fwd = start, *bwd;
      
bwd = fwd;
      
while (curptr != NULL)
	{
	  
len++;
	  
curptr = curptr->next;
	
}
      
if (pos > 1 && pos < len)
	{
	  
for (int i = 0; i < pos - 2; i++)
	    {
	      
bwd = fwd;
	      
fwd = fwd->next;
	    
} 
bwd->next = fwd->next;
	  
free (fwd);
	
}



      
      else
	{
	  
cout << "not a valid position" << endl;
	
}
    
 
}

 
}


void
delete_last ()
{
  
if (start == NULL)
    {
      
cout << "no link list exist" << endl;
    
}
  
  else
    {
      
struct node *fwd = start, *bwd;
      
bwd = fwd;
      
while (fwd->next != NULL)
	{
	  
bwd = fwd;
	  
fwd = fwd->next;
	
}
      
bwd->next = NULL;
      
free (fwd);
      
cout << "link has been deleted " << endl;
    
 
 
}

}


 
 
int
main ()
{
  
int choice;
  
while (1)
    {
      
cout << "\n 1for insert the element at firstt" << endl;
      
cout << "\n 2for insert the element at given positio" << endl;
      
cout << "\n 3for insert the element at last " << endl;
      
cout << "\n 4for delete the element at first " << endl;
      
cout << "\n 5for delete the element at position " << endl;
      
cout << "\n 6for delete the element at last " << endl;
      
cout << "\n 7dispaly" << endl;
      
 
cout << "\n 8for exit from program" << endl;
      
cout << "enter the choice" << endl;
      
cin >> choice;
      
switch (choice)
	{
	
case 1:
	  insert_beg ();
	  
break;
	
case 2:
	  insert_pos ();
	  
break;
	
case 3:
	  insert_last ();
	  
break;
	
case 4:
	  delete_begin ();
	  
break;
	
case 5:
	  delete_pos ();
	  
break;
	
case 6:
	  delete_last ();
	  
break;
	
case 7:
	  display ();
	  
break;
	
case 8:
	  
exit (0);
	  
break;
	
default:
	  
cout << "plz enter valid choice" << endl;
	
}
    
}
  
return 0;

}
