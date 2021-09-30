#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int*arr;
};

int isEmpty(struct queue *ptr){
    if(ptr->f==ptr->r){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue *ptr){
    if(ptr->r==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *ptr,int data){
    if(isFull(ptr)){
        printf("Queue is full\n");
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=data;
        printf("Enqueue element %d\n",data);
    }
}

int dequeue(struct queue *ptr){
    if(isEmpty(ptr)){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        ptr->f++;
        int x=ptr->arr[ptr->f];
        return x;
    }
}

int firstVal(struct queue *ptr){
    return ptr->arr[ptr->f+1];
}

int lastVal(struct queue *ptr){
    return ptr->arr[ptr->r];
}

int main(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->size=4;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));

    printf("Dequeue element %d\n",dequeue(q));
    enqueue(q,12); 
    enqueue(q,13); 
    enqueue(q,14); 
    enqueue(q,15); 
    printf("Dequeue element %d\n",dequeue(q));
    printf("Dequeue element %d\n",dequeue(q));
    printf("Dequeue element %d\n",dequeue(q));
    printf("Dequeue element %d\n",dequeue(q));
    enqueue(q,16); 
    enqueue(q,17); 

    if(isEmpty(q)){
        printf("Queue is empty\n");
    }

    if(isFull(q)){
        printf("Queue is full\n");
    }
    // printf("First value:%d\n",firstVal(q));
    // printf("Last value:%d\n",lastVal(q));

    // for(int i=q->f+1;i<=q->r;i++){
    //     printf("Element %d\n",q->arr[i]);
    // }
}
