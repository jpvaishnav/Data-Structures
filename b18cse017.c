#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<stdbool.h>
 #define MAX 10
 int fib_size[MAX];
 void fib(){
    fib_size[1]=1;
    fib_size[2]=1;
    for(int i=3;i<MAX;i++){
          fib_size[i]=fib_size[i-1]+fib_size[i-2];
    }
 }
 struct node{
     int  data;
     struct node* next;
     //int front,rear;
 };
 struct queue{
     struct node* Nodes;
     int front,rear;
 };
 struct queue* createQueue(struct queue* q,int n){
    q=(struct queue*)malloc(sizeof(struct queue));
    //declare n Nodes;
    q->Nodes=(struct node*)malloc(n*sizeof(struct node));
    /*for(int i=0;i<n;i++){
        printf("%d ",sizeof(q->Nodes[i]));
    }*/
    /*for(int i=0;i<n;i++){
        q->Nodes[i].data=(int*)malloc(fib_size[i+1]*sizeof(int));
    }*/
    return q;
 }
 /*struct queue* Enqueue(struct queue* q,int val){
     if(q->rear == MAX-1){
         return q;
     }
     else{
    struct node* temp = q->Nodes[q->front];
    int arr_size=0;
    while(temp!=NULL){
        temp=temp->next;
        arr_size++;
    }
    if(arr_size < fib_size[q->front]){
        temp->data=val;
        //assuming next is null.
    }
    else{
        q->front++;
        q->Nodes[q->front]->data=val;
    }
    }
    return q;
 }*/
 bool empty(struct queue* q){
     return q->rear+q->front+1==0;
 }
 struct queue* Dequeue(struct queue * q){
     return q;
 }
 void insertionSort(double arr[], int n) 
{ 
    int i, j;
    double key; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
void enqueue(struct queue* q,int val){

}
 int main(){
     int n=0;
     double arr[MAX];
     FILE *f=fopen("input.txt","r");
     FILE * fs=fopen("output.txt","w");
    double value;
    //unsigned int i;         
 
    while(f!=NULL) {
        fscanf(f, "%lf",&value);
        arr[n]=value;
        //printf("%lf\n",values);
        //fprintf(fs,"%lf\n",value);
        n++;
     }
 
    fclose(f);
     //struct queue* Queue;
     //int n;
     //scanf("%d",&n);
     //Queue=createQueue(Queue,n);
 //    Queue->Nodes[0]->data=1;
    
     //double arr[n];
     /*for(int i=0;i<n;i++){
       //  scanf("%lf",&arr[i]);
         enqueue(Queue,arr[i]);
     }*/
     insertionSort(arr,n);
     for(int i=0;i<n;i++){
         fprintf(fs,"%lf\n",arr[i]);
        // printf("%f\n",arr[i]);
     }
     fclose(fs);

 }