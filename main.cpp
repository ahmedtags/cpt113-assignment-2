#include <string>
#include "LinkedList_class3.h"  //This also includes Person_Class.h

void loadDataFromFile(LinkedList &list, const string &filename) {
    ifstream file("data.txt");

    string line, name, jobId;
    double income;
    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, jobId, ',');
        ss >> income;

        list.addPerson(Person(name, jobId, income));
    }

    file.close();
} // end of loading data from file Method 

void display_category(){
	cout << endl;
	cout << "Category   Chargeable Income    \t Calculations (RM)                      Rate %   Tax (RM)\n\n";
    cout << "A            0 - 5,000          \t On the First 5,000                      0         0\n\n";
    cout << "B            5,001 - 20,000     \t On the First 5,000                      1         150\n";
    cout << "                                \t Next 15,000\n";
    cout << "C            20,001 - 35,000    \t On the First 20,000                     3         450\n";
    cout << "                                \t Next 15,000\n";
    cout << "D            35,001 - 50,000    \t On the First 35,000                     6         900\n";
    cout << "                                \t Next 15,000\n";
    cout << "E            50,001 - 70,000    \t On the First 50,000                    11        2,200\n";
    cout << "                                \t Next 20,000\n";
    cout << "F            70,001 - 100,000   \t On the First 70,000                    19        5,700\n";
    cout << "                                \t Next 30,000\n";
    cout << "G            100,001 - 400,000  \t On the First 100,000                   25        75,000\n";
    cout << "                                \t Next 300,000\n";
    cout << "H            400,001 - 600,000  \t On the First 400,000                   26        52,000\n";
    cout << "                                \t Next 200,000\n";
    cout << "I            600,001 - 2,000,000\t On the First 600,000                   28        392,000\n";
    cout << "                                \t Next 1,400,000\n";
    cout << "J            Exceeding 2,000,000\t On the First 2,000,000                 30        528,400\n";

};// end of displaying category method 
// Main function with menu
int main() {
    LinkedList list;
    string filename = "Data.txt";
    loadDataFromFile(list, filename);
    void display_category();
    int choice;
    do {
        cout << "\n--- iTaxPro Menu ---\n";
        cout << "1. Display All Individuals\n";
        cout << "2. Search Individual by Job ID\n";
        cout << "3. Add Individual\n";
        cout << "4. Delete Individual by Job ID\n";
        cout << "5. Show Category\n";
        cout << "6. Count Individuals in Tax Categories\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
		if(list.isEmpty() ) {
        cout << "The list is empty" << endl;
        }
		 else {
        list.displayAll();  // This will print the list
        }
        break;
        case 2: {
            string jobId;
            cout << "Enter Job ID: ";
            cin >> jobId;
            list.displayPerson(jobId);
            break;
        }
        case 3: {
            string name, jobId;
            double income;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Job ID: ";
            cin >> jobId;
            cout << "Enter Annual Income: ";
            cin >> income;

            while ( income < 0 ) {
            cout << "Invalid input.\n Please enter a positive numeric value for income: ";
            cin >> income;
}
            list.addPerson(Person(name, jobId, income));
            break;
        }
        case 4: {
         if (list.isEmpty() ) {
        cout << "The list is empty" << endl;
        }
		 else {
            string jobId;
            cout << "Enter Job ID to delete: ";
            cin >> jobId;
            list.deletePerson(jobId);
        }
         break;
        }
        case 5:
        	display_category() ;
            break;
            
	    case 6:
            list.countTaxCategories();
            break;
        case 7:
            cout << "Exiting program. Goodbye" << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 7);

    return 0;
} // end of the main funtion
