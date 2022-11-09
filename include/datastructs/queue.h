#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#ifndef DATASTRUCTS_DATA_T
#define DATASTRUCTS_DATA_T 
typedef uint64_t Data;
#endif // DATASTRUCTS_DATA_T

#ifndef DATASTRUCTS_QUEUE_H
#define DATASTRUCTS_QUEUE_H 

typedef struct QueueNode {
	Data value;
	QueueNode *next;
} QueueNode;

typedef struct Queue {
	QueueNode *head,*tail;
	int length;
} Queue;

QueueNode *new_QueueNode(Data d);
void del_QueueNode(QueueNode *sn);
QueueNode *copy_QueueNode(QueueNode *sn);

Queue *new_Queue();
void del_Queue(Queue *s);
Queue *copy_Queue(Queue *s);


void clear(Queue *s);
void enqueue(Queue *s, Data d);
Data dequeue(Queue *s);
Data peek(Queue *s);

#endif // DATASTRUCTS_QUEUE_H