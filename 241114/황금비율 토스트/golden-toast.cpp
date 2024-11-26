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
} List;

void initList(List *list) {
    list->head = NULL;
    list->tail = NULL;
    list->cursor = NULL;
}

void insert(List *list, char c) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = c;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (list->cursor == NULL) {
        list->head = newNode;
        list->tail = newNode;
        list->cursor = newNode;
    } else {
        if (list->cursor == list->tail) {
            newNode->prev = list->tail;
            list->tail->next = newNode;
            list->tail = newNode;
        } else {
            newNode->prev = list->cursor;
            newNode->next = list->cursor->next;
            if (list->cursor->next) {
                list->cursor->next->prev = newNode;
            }
            list->cursor->next = newNode;
            if (list->cursor == list->tail) {
                list->tail = newNode;
            }
        }
    }
    list->cursor = newNode;
}

void delete(List *list) {
    if (list->cursor == NULL) return;

    Node *toDelete = list->cursor;

    if (toDelete == list->head && toDelete == list->tail) {
        list->head = NULL;
        list->tail = NULL;
        list->cursor = NULL;
    } else if (toDelete == list->head) {
        list->head = toDelete->next;
        list->head->prev = NULL;
        list->cursor = list->head;
    } else if (toDelete == list->tail) {
        list->tail = toDelete->prev;
        list->tail->next = NULL;
        list->cursor = NULL;
    } else {
        toDelete->prev->next = toDelete->next;
        toDelete->next->prev = toDelete->prev;
        list->cursor = toDelete->next;
    }
    free(toDelete);
}

void moveLeft(List *list) {
    if (list->cursor && list->cursor->prev) {
        list->cursor = list->cursor->prev;
    }
}

void moveRight(List *list) {
    if (list->cursor && list->cursor->next) {
        list->cursor = list->cursor->next;
    }
}

void printList(List *list) {
    Node *current = list->head;
    while (current) {
        printf("%c", current->data);
        current = current->next;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    char s[1000001];

    scanf("%d %d", &n, &m);
    scanf("%s", s);

    List list;
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
