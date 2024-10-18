#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double item1, item2, item3, item4, item5, item6;
    double totalCost;
    double discount1 = 0.0;
    double discount2 = 0.0;

    cout << "Enter price of 6 items in ascending order: " << endl;
    cin >> item1 >> item2 >> item3 >> item4 >> item5 >> item6;

    totalCost = item1 + item2 + item3 + item4 + item5 + item6;

    // Calculate discount 1: 50% off the two lowest-priced items
    discount1 = 0.5 * (item1 + item2);

    // Calculate discount 2: 25% off the three lowest-priced items
    discount2 = 0.25 * (item1 + item2 + item3);

    // Find the maximum discount
    double maxDiscount = max(discount1, discount2);

    // Display results
    cout << "Full retail total: " << totalCost << endl;
    cout << "Maximum discount: " << maxDiscount << endl;
    cout << "Total after discount: " << totalCost - maxDiscount << endl;

    return 0;
}