#include <iostream>
using namespace std;

int main() {
    int d_returned, m_returned, y_returned;
    cin >> d_returned >> m_returned >> y_returned;

    int d_due, m_due, y_due;
    cin >> d_due >> m_due >> y_due;

    int fine = 0;

    if (y_returned > y_due) {
        fine = 10000;
    } else if (y_returned == y_due) {
        if (m_returned > m_due) {
            fine = 500 * (m_returned - m_due);
        } else if (m_returned == m_due && d_returned > d_due) {
            fine = 15 * (d_returned - d_due);
        }
    }

    cout << fine << endl;

    return 0;
}
