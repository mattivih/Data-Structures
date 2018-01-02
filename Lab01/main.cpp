#include "Time.h"
/*
int main() {
    Time time1, time2, duration;
    time1.read("Enter time 1");
    time2.read("Enter time 2");
    if (time1.lessThan(time2)) {
        duration = time2.subtract(time1);
        cout << "Starting time was ";
        time1.display();
    } else {
        duration = time1.subtract(time2);
        cout << "Starting time was ";
        time2.display();
    }
    cout << "Duration was ";
    duration.display();
    return 0;
}
 */

int main()
{
    Time start, end, duration;
    cout << "Enter starting time "; cin >> start;
    cout << "Enter ending time "; cin >> end;
    duration = start < end ? end - start : start - end;
    cout << "Duration " << duration << endl;
    cout << "Starting time was " << end - duration << endl;
    cout << "Ending time was " << start + duration << endl;
    return 0;
}
