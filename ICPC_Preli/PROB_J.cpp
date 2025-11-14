#include <bits/stdc++.h>
using namespace std;

#define Fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

double compute_tax(double income) {
    double pa = 12500;
    if (income > 100000) {
        pa -= 0.5 * (income - 100000);
        if (pa < 0) pa = 0;
    }

    double tax = 0;

    double t_income = income;

    // 0% band
    double free_band = min(pa, t_income);
    t_income -= free_band;

    // 20% band (up to 37,500)
    double b20 = min(37500.0, t_income);
    tax += b20 * 0.20;
    t_income -= b20;

    // 40% band (next 100,000)
    double b40 = min(100000.0, t_income);
    tax += b40 * 0.40;
    t_income -= b40;

    // 45% band
    if (t_income > 0) tax += t_income * 0.45;

    return tax;
}

void solve() {
    double tax; 
    cin >> tax;

    if (tax == 0) {
        cout << "12500.00\n";
        return;
    }

    // Binary search for income
    double low = 0, high = 1e7;

    for (int i = 0; i < 200; i++) {
        double mid = (low + high) / 2;
        double t = compute_tax(mid);

        if (t > tax) high = mid;
        else low = mid;
    }

    cout << fixed << setprecision(2) << low << "\n";
}

int main() {
    Fast_io;
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
