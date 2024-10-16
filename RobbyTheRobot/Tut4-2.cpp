//#include <iostream>
//using namespace std;
//
//int main() {
//    int age;
//    int totalPeople = 0;
//    double totalCost = 0.0;
//    const double under16Price = 2.50;
//    const double over65Price = 3.00;
//    const double regularPrice = 5.00;
//    const double discountRate = 0.20;
//
//    while (true) {
//        cout << "Enter age (or -1 to finish): ";
//        cin >> age;
//
//        if (age == -1) {
//            break; // Exit the loop if -1 is entered.
//        }
//
//        totalPeople++;
//
//      
//        if (age < 16) {
//            totalCost += under16Price;
//        }
//        else if (age > 65) {
//            totalCost += over65Price;
//        }
//        else {
//            totalCost += regularPrice;
//        }
//    }
//
//   
//    if (totalPeople >= 6) {
//        totalCost *= (1 - discountRate); // This is to apply the 20% discount
//    }
//
//    // Display total number of people and total cost
//    cout << "Total number of people: " << totalPeople << endl;
//    cout << "Total cost: " << totalCost << endl;
//
//    return 0;
//}