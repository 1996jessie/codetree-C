#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    Node *cursor;
} LinkedList;

void initList(LinkedList *list) {
    list->head = NULL;
    list->tail = NULL;
    list->cursor = NULL;
}

void insert(LinkedList *list, char c) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = c;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (list->cursor == NULL) {
        list->head = newNode;
        list->tail = newNode;
        list->cursor = newNode;
    } else {
        if (list->cursor->next == NULL) {
            newNode->prev = list->cursor;
            list->cursor->next = newNode;
            list->tail = newNode;
        } else {
            newNode->prev = list->cursor;
            newNode->next = list->cursor->next;
            list->cursor->next->prev = newNode;
            list->cursor->next = newNode;
        }
    }
    list->cursor = newNode;
}

void moveLeft(LinkedList *list) {
    if (list->cursor && list->cursor->prev) {
        list->cursor = list->cursor->prev;
    }
}

void moveRight(LinkedList *list) {
    if (list->cursor && list->cursor->next) {
        list->cursor = list->cursor->next;
    }
}

void delete(LinkedList *list) {
    if (!list->cursor || !list->cursor->next) return;

    Node *toDelete = list->cursor->next;

    if (toDelete->next) {
        toDelete->next->prev = list->cursor;
    } else {
        list->tail = list->cursor;
    }

    list->cursor->next = toDelete->next;
    free(toDelete);
}

void printList(LinkedList *list) {
    Node *current = list->head;
    while (current) {
        printf("%c", current->data);
        current = current->next;
    }
}

int main() {
    int n, m;
    char s[100001];
    scanf("%d %d", &n, &m);
    scanf("%s", s);

    LinkedList list;
    initList(&list);

    for (int i = 0; i < strlen(s); i++) {
        insert(&list, s[i]);
    }

    list.cursor = list.tail;

    while (m--) {
        char command;
        scanf(" %c", &command);

        if (command == 'L') {
            moveLeft(&list);
        } else if (command == 'R') {
            moveRight(&list);
        } else if (command == 'D') {
            delete(&list);
        } else if (command == 'P') {
            char c;
            scanf(" %c", &c);
            insert(&list, c);
        }
    }

    printList(&list);
    return 0;
}
