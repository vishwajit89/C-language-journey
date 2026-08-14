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

struct Contact* searchContact(char name[]) {
    struct Contact *temp = head;
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) return temp;
        temp = temp->next;
    }
    return NULL;
}

void deleteContact(char name[]) {
    struct Contact *temp = head, *prev = NULL;

    if (temp != NULL && strcmp(temp->name, name) == 0) {
        head = temp->next;
        free(temp);
        printf("Deleted.\n");
        return;
    }

    while (temp != NULL && strcmp(temp->name, name) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted.\n");
}

void updateContact(char name[]) {
    struct Contact *c = searchContact(name);
    if (c == NULL) {
        printf("Not found.\n");
        return;
    }
    printf("Enter new phone: ");
    scanf("%s", c->phone);
    printf("Enter new email: ");
    scanf("%s", c->email);
}

void saveToFile() {
    FILE *fp = fopen("contacts.txt", "w");
    struct Contact *temp = head;
    while (temp != NULL) {
        fprintf(fp, "%s,%s,%s\n", temp->name, temp->phone, temp->email);
        temp = temp->next;
    }
    fclose(fp);
}

void loadFromFile() {
    FILE *fp = fopen("contacts.txt", "r");
    if (fp == NULL) return;

    char name[50], phone[10], email[50];
    while (fscanf(fp, "%49[^,],%9[^,],%49[^\n]\n", name, phone, email) == 3) {
        addContact(name, phone, email);
    }
    fclose(fp);
}

void freeAll() {
    struct Contact *temp = head;
    while (temp != NULL) {
        struct Contact *next = temp->next;
        free(temp);
        temp = next;
    }
}

int main() {
    loadFromFile();

    int choice;
    char name[50], phone[10], email[50];

    while (1) {
        printf("\n1.Add 2.View 3.Search 4.Delete 5.Update 6.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Name: "); scanf("%s", name);
                printf("Phone: "); scanf("%s", phone);
                printf("Email: "); scanf("%s", email);
                addContact(name, phone, email);
                break;
            case 2:
                printAll();
                break;
            case 3:
                printf("Name to search: "); scanf("%s", name);
                struct Contact *found = searchContact(name);
                if (found) printf("%s | %s | %s\n", found->name, found->phone, found->email);
                else printf("Not found.\n");
                break;
            case 4:
                printf("Name to delete: "); scanf("%s", name);
                deleteContact(name);
                break;
            case 5:
                printf("Name to update: "); scanf("%s", name);
                updateContact(name);
                break;
            case 6:
                saveToFile();
                freeAll();
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
