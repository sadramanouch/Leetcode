class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int collect = 0;
        int p_last = 0;

        int g_last = 0;

        int m_last = 0;
        for (int j = 0; j < garbage.size(); j++) {
            int p = ranges::count(garbage[j], 'P');
            int g = ranges::count(garbage[j], 'G');
            int m = ranges::count(garbage[j], 'M');
            if (p > 0) p_last = j;
            if (g > 0) g_last = j;
            if (m > 0) m_last = j;
            collect += (p+g+m);
        }
        int traveltime = 0;
        for (int j = 0; j < garbage.size(); j++) {
            if (j < p_last) traveltime += travel[j];
            if (j < g_last) traveltime += travel[j];
            if (j < m_last) traveltime += travel[j];
        }
        return collect + traveltime;
    }
};