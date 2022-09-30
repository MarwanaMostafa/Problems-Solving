class Solution {
public:
int numberOfDays(int month)
{

// January - 31 days
// February - 28 days in a common year and 29 days in leap years
// March - 31 days
// April - 30 days
// May - 31 days
// June - 30 days
// July - 31 days
// August - 31 days
// September - 30 days
// October - 31 days
// November - 30 days
// December - 31 days

    switch (month)
    {
    case 1:
        return 0;
    case 2:
        return 31;
    case 3:
        return 59;
    case 4:
        return 90;
    case 5:
        return 120;
    case 6:
        return 151;
    case 7:
        return 181;
    case 8:
        return 212;
    case 9:
        return 243;
    case 10:
        return 273;
    case 11:
        return 304;
    case 12:
        return 334;
    }
    return 0;
}
   int dayOfYear(string date) {
           int leepYear = 0;
     if (stoi(date.substr(5, 7)) > 2 && stoi(date.substr(0, 4)) != 1900)

        leepYear = (stoi(date.substr(0, 4)) % 4 == 0) ? 1 : 0;
    return leepYear + stoi(date.substr(8, 9)) + numberOfDays(stoi(date.substr(5, 7)));

    }
};