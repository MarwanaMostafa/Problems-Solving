class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int largest_Altitude = 0;
    int summation = 0;
    for (int i = 0; i < gain.size(); i++)
    {
        summation += gain[i];
        if (summation > largest_Altitude)
            largest_Altitude = summation;
    }
    return largest_Altitude;
    }
};