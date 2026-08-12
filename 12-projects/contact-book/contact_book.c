#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[10];
    char email[50];
    struct Contact *next;
};

struct Contact *head = NULL;

void addContact(char name[], char phone[], char email[]) {
    struct Contact *newContact = (struct Contact*) malloc(sizeof(struct Contact));
    strcpy(newContact->name, name);
    strcpy(newContact->phone, phone);
    strcpy(newContact->email, email);
    newContact->next = NULL;

    if (head == NULL) {
        head = newContact;
    } else {
        struct Contact *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newContact;
    }
}

void printAll() {
    struct Contact *temp = head;
    int i = 1;
    while (temp != NULL) {
        printf("%d. %s | %s | %s\n", i, temp->name, temp->phone, temp->email);
        temp = temp->next;
        i++;
    }
}

int main() {
    addContact("Rahul", "9876543210", "rahul@mail.com");
    addContact("Priya", "9123456780", "priya@mail.com");

    printAll();

    return 0;
}