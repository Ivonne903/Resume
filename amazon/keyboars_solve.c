#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char val;
    struct Node* next;
    struct Node* prev;
} Node;

// Helper function to create a new node
Node* createNode(char c) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = c;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

char* receivedText(char* S) {
    int numericLock = 1; // Numeric Lock initially ON
    Node *head = createNode('\0');  // dummy head
    Node *tail = head;
    Node *cursor = head;

    for (int i = 0; S[i] != '\0'; ++i) {
        char c = S[i];

        if (c == '*') {
            // Backspace: delete character before cursor
            if (cursor != head) {
                Node* toDelete = cursor;
                cursor = cursor->prev;
                cursor->next = toDelete->next;
                if (toDelete->next) toDelete->next->prev = cursor;
                free(toDelete);
                if (cursor->next == NULL) tail = cursor;
            }
        } else if (c == '<') {
            // Home: move cursor to the beginning
            cursor = head;
        } else if (c == '>') {
            // End: move cursor to the end
            cursor = tail;
        } else if (c == '#') {
            // Numeric Lock toggle
            numericLock = !numericLock;
        } else if (c >= '0' && c <= '9') {
            if (numericLock) {
                // Insert digit only if Numeric Lock is ON
                Node* newNode = createNode(c);
                newNode->next = cursor->next;
                newNode->prev = cursor;
                if (cursor->next) cursor->next->prev = newNode;
                cursor->next = newNode;
                cursor = newNode;
                if (cursor->next == NULL) tail = cursor;
            }
        } else {
            // Insert regular character
            Node* newNode = createNode(c);
            newNode->next = cursor->next;
            newNode->prev = cursor;
            if (cursor->next) cursor->next->prev = newNode;
            cursor->next = newNode;
            cursor = newNode;
            if (cursor->next == NULL) tail = cursor;
        }
    }

    // Now convert the linked list to string
    int len = 0;
    Node* temp = head->next;
    while (temp) {
        ++len;
        temp = temp->next;
    }

    char* result = (char*)malloc(len + 1);
    temp = head->next;
    for (int i = 0; i < len; ++i) {
        result[i] = temp->val;
        temp = temp->next;
    }
    result[len] = '\0';

    // Free the linked list
    temp = head;
    while (temp) {
        Node* next = temp->next;
        free(temp);
        temp = next;
    }

    return result;
}

// Example usage
int main() {
    char input[] = "HE*<LL>O";
    char* output = receivedText(input);
    printf("%s\n", output);  // Expected Output: LLHO
    free(output);
    return 0;
}
