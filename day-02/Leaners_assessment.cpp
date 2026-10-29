#include <iostream>
#include <iomanip> // Required for fixed and setprecision

using namespace std;

int main() {
    // --- 1. DECLARATION [2 MARKS] ---
    double budget =100.00;
    double polonyKg =1.5;
    double polonyPricePerKg = 24.00;
    double chipsKg = 2.25;
    double chipsPricePerKg = 18.00;
    double polonyCost, chipsCost, subTotal;
    double vatAmount, totalExpense, balance;
    const double VAT_RATE = 0.15; // 15% statutory South African VAT

       // --- 3. ARITHMETIC PROCESSING [8 MARKS] ---
    polonyCost = polonyKg * polonyPricePerKg;   // R36.00
    chipsCost = chipsKg * chipsPricePerKg;       // R40.50
    subTotal = polonyCost + chipsCost;           // R76.50
    vatAmount = subTotal * VAT_RATE;             // R11.475
    totalExpense = subTotal + vatAmount;         // R87.975
    balance = budget - totalExpense;             // R12.025

    // --- 4. OUTPUT DISPLAY [4 MARKS] ---
    // Configure streams to display floating-point values to exactly 2 decimal places
    cout << fixed << setprecision(2);

    cout << "=== SNACK BUDGET REPORT ===" << endl;
    cout << "Subtotal (Excl. VAT): R" << subTotal << endl;
    cout << "VAT (15%):            R" << vatAmount << endl;
    cout << "Total Cost (Incl. VAT):R" << totalExpense << endl;
    cout << "---------------------------" << endl;
    cout << "Remaining Balance:     R" << balance << endl;

    return 0;
}
