#include <stdlib.h>
#include <stdio.h>

struct Exam {
    char subject[30];
    char date[15];
    struct Exam *next;
};

int main() {
    struct Exam *head = NULL, *temp, *newNode;
    int n, i;

    printf("Enter number of exams: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        
        newNode = new Exam;

        printf("\nEnter subject: ");
        scanf("%s", newNode->subject);

        printf("Enter date: ");
        scanf("%s", newNode->date);

        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    printf("\n--- Exam Schedule ---\n");
    temp = head;

    while (temp != NULL) {
        printf("Subject: %s | Date: %s\n",
               temp->subject, temp->date);
        temp = temp->next;
    }

    return 0;
}
