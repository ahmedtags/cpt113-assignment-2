#include <iostream>
#include <sstream>
#include <fstream>
#include "Person_Class.h"
using namespace std;
// Node structure for the linked list
struct Node {
    Person *data;
    Node *next;
}; 

// LinkedList class to manage Person objects
class LinkedList {
private:
    Node *head;
    Node *tail;
    int count;

public:
    LinkedList() : head(NULL), tail(NULL), count(0) {}

    ~LinkedList() {  }

    // Add a person to the linked list
void addPerson(const Person &person) {
    // Check for duplicate name or Job ID
    Node *current = head;
    while (current != NULL) {
        if (current->data->getJobId() == person.getJobId()) {
            cout << "Error: A person with the Job ID '" << person.getJobId() << "' already exists." << endl;
            return;
        }
        current = current->next;
    }

    // Add person if validations pass
    Node *newNode = new Node{new Person(person), NULL};
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
} // end of add Person or indivuille method 


    // Delete a person by Job ID
    void deletePerson(const string &jobId) {
        Node *current = head;
        Node *previous = NULL;

        while (current != NULL && current->data->getJobId() != jobId) {
            previous = current;
            current = current->next;
        }

        if (current == NULL) {
            cout << "Person with Job ID " << jobId << " not found!" << endl;
            return;
        }

        if (current == head) {
            head = head->next;
        } else {
            previous->next = current->next;
        }

        if (current == tail) {
            tail = previous;
        }

        delete current->data;
        delete current;
        count--;

        cout << "Person with Job ID " << jobId << " deleted successfully!" << endl;
    } // end of Delete Peron Method 

    // Display all persons
    void displayAll() const {
        cout << "Name" << "\t\t" << "Job ID"
             << "\t\t" << "Annual Income"
             << "\t\t" << "Chargeable income "
             << "\t\t" << " Estimated Tax" << endl;
        cout << "----------------------------------------------------------------------------" << endl;

        Node *current = head;
        while (current != NULL) {
            current->data->display();
            current = current->next;
        }
    } // end of DisplayAll Method

    // Search and display a person by Job ID
    void displayPerson(const string jobId) const {
        Node *current = head;
        while (current != NULL && current->data->getJobId() != jobId) {
            current = current->next;
        }

        if (current == NULL) {
            cout << "Person with Job ID " << jobId << " not found!" << endl;
        } else {
            current->data->display();
        }
    } // end of Display Person Method

    // Count individuals in each tax category
void countTaxCategories() const {
    int categories[10] = {0}; // Array to store counts for each tax category (A to J)
    Node *current = head;

    while (current != NULL) {
        double income = current->data->getChargeableIncome();

        if (income <= 5000) categories[0]++;          // Category A
        else if (income <= 20000) categories[1]++;    // Category B
        else if (income <= 35000) categories[2]++;    // Category C
        else if (income <= 50000) categories[3]++;    // Category D
        else if (income <= 70000) categories[4]++;    // Category E
        else if (income <= 100000) categories[5]++;   // Category F
        else if (income <= 400000) categories[6]++;   // Category G
        else if (income <= 600000) categories[7]++;   // Category H
        else if (income <= 2000000) categories[8]++;  // Category I
        else categories[9]++;                         // Category J

        current = current->next;
    }

    // Display category counts
    cout << "\nTax Categories Count:" << endl;
    cout << "Category A : " << categories[0] << " individuals" << endl;
    cout << "Category B : " << categories[1] << " individuals" << endl;
    cout << "Category C : " << categories[2] << " individuals" << endl;
    cout << "Category D : " << categories[3] << " individuals" << endl;
    cout << "Category E : " << categories[4] << " individuals" << endl;
    cout << "Category F : " << categories[5] << " individuals" << endl;
    cout << "Category G : " << categories[6] << " individuals" << endl;
    cout << "Category H : " << categories[7] << " individuals" << endl;
    cout << "Category I : " << categories[8] << " individuals" << endl;
    cout << "Category J : " << categories[9] << " individuals" << endl;
} // end of Count Tax Categories Method


}; //end of the linklist class
