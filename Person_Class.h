#include <iostream>
using namespace std;
// Person class to store individual details
class Person {
private:
    string name;
    string jobId;
    double annualIncome;
    double chargeableIncome;
    double estimatedTax;

public:
    // Constructor to initialize a Person object
    Person(const string name, const string jobId, double annualIncome)
        : name(name), jobId(jobId), annualIncome(annualIncome) {
        chargeableIncome = annualIncome * 0.87; // 13% deduction
        estimatedTax = calculateTax(chargeableIncome);}
     ~Person() {}


	void setperson(const string n, const string job, double Income) {
        name = n;
        jobId = job;
        annualIncome = Income;
        chargeableIncome = annualIncome * 0.87; // Deduct 13% for chargeable income
        estimatedTax = calculateTax(chargeableIncome);
    } // end of setperson

    // Static method to calculate tax based on chargeable income
    double calculateTax(double income) {
    double tax = 0;
    if (income > 5000) {
        if (income <= 20000) {
            tax += (income - 5000) * 0.01; 
        } else if (income <= 35000) {
            tax += 150; // First RM 20,000
            tax += (income - 20000) * 0.03; 
        } else if (income <= 50000) {
            tax += 600; // First RM 35,000
            tax += (income - 35000) * 0.06; 
        } else if (income <= 70000) {
            tax += 1500; // First RM 50,000
            tax += (income - 50000) * 0.11; 
        } else if (income <= 100000) {
            tax += 3700; // First RM 70,000
            tax += (income - 70000) * 0.19; 
        } else if (income <= 400000) {
            tax += 9400; // First RM 100,000
            tax += (income - 100000) * 0.25; 
        } else if (income <= 600000) {
            tax += 84400; // First RM 400,000
            tax += (income - 400000) * 0.26; 
        } else if (income <= 2000000) {
            tax += 136400; // First RM 600,000
            tax += (income - 600000) * 0.28; 
        } else {
            tax += 528400; // First RM 2,000,000
            tax += (income - 2000000) * 0.30; 
        }
      }

    return tax;
	} // end of the calculate tax method


    // Display a person's details
    void display() const {
        cout << name << "\t\t" << jobId << "\t\t" 
		 << annualIncome << "RM" << "\t\t"
		  << chargeableIncome << "RM" << "\t\t"
		   << estimatedTax << endl;
    } // end of display method

    // Getters for private members
    string getJobId() const { return jobId; }
    double getEstimatedTax() const { return estimatedTax; }
    double getChargeableIncome() const {return chargeableIncome;}
    string getName() const{return name;}
    double getannualIncome()const {return annualIncome;}
}; // end of the class Person
