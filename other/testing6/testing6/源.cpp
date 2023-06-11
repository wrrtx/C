//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int capacity = 0;
        int n = gas.size();
        int i = 0, j = 0, cnt = 0;
        for (; i < n; i++) {
            capacity += gas[i];
            j = i;
            while (capacity >= cost[j]) {
                if (j == n - 1) {
                    capacity = capacity - cost[j] + gas[0];
                    j = 0;
                    cnt++;
                }
                else {
                    capacity = capacity - cost[j];
                    j++;
                    capacity += gas[j];
                    cnt++;
                }
                if (capacity < 0) break;
                if (cnt == n) return i + 1;
            }
            capacity = 0;
            cnt = 0;
        }
        return -1;
    }
};
int main()
{
    Solution s();
    vector<int> gas = { 1,2,3,4,5 };
    vector<int> cost = { 1,2,3,4,5 };
    int x = s.canCompleteCircuit(gas, cost);
}
