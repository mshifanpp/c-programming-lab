//merging two arrays
#include<stdio.h>
void main()
{
int arr1[20],arr2[20],arr3[40],n1,n2,n3;
void readdata(int[],int);
void sortdata(int[],int);
void printdata(int[],int);
void mergedata(int[],int[],int[],int,int);
printf("no of elments in first array[1-20] :");
scanf("%d",%n1);
readdata(arr1,n1);
printf("no of elements in second array [1-20]:");
scanf("%d",&n2);
readdata(arr2,n2)
sortdata(arr1,n1);
mergedata(arr1,arr2,arr3,n1,n2);
printf("sorted  array 1:");
printdata(arr2,n2);
printf("merged array:");
printdata(arr3,n1+n2);
}
//function to read ana array
void readdata(int a[],int n)
{int i;
printf("enter %d number :",n):
        for(i=0;i<n;i++)
           scanf("%d",&a[]);
           return;
}
//function to display contineus an array
void printdata(inta[],intn)
{
  int i;
  for (i=0;i<n;i++)
     printf("%d",a[]);
    return;
    }
//function to sort an array
void sortdata(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];#include<stdio.h>
#include<stdlib.h>
# define SIZE 10
struct node
{
int data;
int status;
struct node*point,*next;
};
struct topsort
{
int n;
struct topsort*next;
};
//function to add a vertex
void addvertex(int n)
{
struct node* t=(struct node*)malloc(sizeof(struct node));
t->data=n;
t->point;
t->next=g;
g=t;
}
//function to find vertex node address of vertex(linear serch)
struct node* find(int n)
{
struct node*t=g;
while(t!=0&&t->data!=n)
t=t->next;
return t;
}
//function to add an edge
void addedge(int u,int v)
{
struct node *v1,*v2,*t;
v1=find(u);
v2=find(v);
t=(struct node *)(malloc(sizeof(struct node)));
t->next=v1->point;
v1->point=t;
t->point=v2;
return;
}
// function to print graph
void printgraph()
{
struct node*t1,*t2,*t3;
printf("\n vertex\tedgelist\n");
f1=g;
while(t1!=0)
{
printf("\n%d...\t',t1->data);
t2=t1->point;
while(t2!=0)
{t3=t2->point;
printf("%d",",t3->data);
t2=t2->next;
}
t1=t1->next;
}
}
//inserting nodes in topological order list at begning
void topsorting(int n)
{
struct topsort *z=(struct topsort*)malloc(sizeof(struct topsort));
z->n=n;
z->next=tsort;
tsort=z;
}
//printing topological order list
void topsortout()
{
while(tsort!=0)
{
printf("%d,",tsort->n);
tsort=tsort->next;
}
}
//dfs visit
void dfs_visit(struct node * u)
{
struct node*t,*t1;
u->status=1;//visit vertex
printf("%d',",u->data);
t=u->poin;
while(t!=0)
{
t1=t1->point;
if(t1->status==0)//if not visited
dfs_visit(t1);
t=t->next;
}
topsorting(u->data);//store the node totological root list
return n;
}
//dfs search
void dfs(struct node*g1)
{
struct node*t=g;
while(t!=0)
{
t->status=0;//set as not visited
t=t->next;
}
dfs_visit(g1);
}
//enque operation
void enque(struct node*s)
{
int r1=rear;
r1=(r1+1)%SIZE;
if(front==r1)
{
printf("Queue is full");
exit(1);
}
rear=r1;
g[rear]=s;
}
//empty q- to test queue is empty or not
int emptyq()
{
if(front==rear)
return 1;
else
return 0;
}
//dequeoperation
struct node*deque()
{
if(emptyq())
{
printf("empty queue");
exit(2);
}
front=(front+1)%SIZE;
return q[front];
}
//bfs
void bfs(struct node*s)
{
struct node*t=g,*t1,*u;
while(t!=o)
{
t->status=0;//set all vertces as not visited
t=t->next;
}
s->status=1://visit start vertex
printf("%d,",s->data);
enque(s);
while(!emptyq());
{
u=dequeue();
t=u->point;
while(t!=0)
{
t1=t->point;
if (t1->status==0)
{
printf("%d,",t1->data);
t1->status=1;
enque(t1);
}
t=t->next;
}
}
}
main()
{
addvertex(1);
addvertex(2);
addvertex(3);
addvertex(4);
addvertex(5);
addedge(1,2);
addedge(1,4);
addedge(2,3);
addedge(2,4);
addedge(4,3);
addedge(4,5);
printf("the graph is:\n");
printgraph(g);
printf("\nDfs tranverse:");
dfs(find(1));
printf("\nBfs tranverse:");
bfs(find(1));
printf("\ntoptological sort oder  is:");
topsortout();
}

a[j]=temp;
}
return;
}
// for merging two arrays
void mergedata(int a[],int b[],int c[],int n1,int n2)
{
int i,j,k;
i=j=k=0;
while(i<n1 && j<n2)
if(a[i]<b[j])
 c[k++]=a[i++];
else
    c[k++]=b[j++];
//copy remaining elements from array
while(i<n1)
{
c[k++]=a[j++];
}
while(j<n2)
{ 
c[k++]=b[j++];
}
}

