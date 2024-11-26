#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int value;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct DoublyLinkedList {
    Node* head;
    Node* tail;
    int size;
} DoublyLinkedList;

void init_list(DoublyLinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void push_front(DoublyLinkedList* list, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = list->head;

    if (list->size == 0) {
        list->head = list->tail = new_node;
    } else {
        list->head->prev = new_node;
        list->head = new_node;
    }
    list->size++;
}

void push_back(DoublyLinkedList* list, int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = list->tail;

    if (list->size == 0) {
        list->head = list->tail = new_node;
    } else {
        list->tail->next = new_node;
        list->tail = new_node;
    }
    list->size++;
}

void pop_front(DoublyLinkedList* list) {
    if (list->size == 0) return;

    printf("%d\n", list->head->value);
    Node* temp = list->head;

    if (list->size == 1) {
        list->head = list->tail = NULL;
    } else {
        list->head = list->head->next;
        list->head->prev = NULL;
    }

    free(temp);
    list->size--;
}

void pop_back(DoublyLinkedList* list) {
    if (list->size == 0) return;

    printf("%d\n", list->tail->value);
    Node* temp = list->tail;

    if (list->size == 1) {
        list->head = list->tail = NULL;
    } else {
        list->tail = list->tail->prev;
        list->tail->next = NULL;
    }

    free(temp);
    list->size--;
}

void get_size(const DoublyLinkedList* list) {
    printf("%d\n", list->size);
}

void is_empty(const DoublyLinkedList* list) {
    printf("%d\n", list->size == 0 ? 1 : 0);
}

void get_front(const DoublyLinkedList* list) {
    if (list->size == 0) return;
    printf("%d\n", list->head->value);
}

void get_back(const DoublyLinkedList* list) {
    if (list->size == 0) return;
    printf("%d\n", list->tail->value);
}

int main() {
    // 여기에 코드를 작성해주세요.
    DoublyLinkedList list;
    init_list(&list);

    int N;
    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        char command[100];
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = '\0';

        if (strncmp(command, "push_front", 10) == 0) {
            int value = atoi(command + 11);
            push_front(&list, value);
        } else if (strncmp(command, "push_back", 9) == 0) {
            int value = atoi(command + 10);
            push_back(&list, value);
        } else if (strcmp(command, "pop_front") == 0) {
            pop_front(&list);
        } else if (strcmp(command, "pop_back") == 0) {
            pop_back(&list);
        } else if (strcmp(command, "size") == 0) {
            get_size(&list);
        } else if (strcmp(command, "empty") == 0) {
            is_empty(&list);
        } else if (strcmp(command, "front") == 0) {
            get_front(&list);
        } else if (strcmp(command, "back") == 0) {
            get_back(&list);
        }
    }

    return 0;
}
