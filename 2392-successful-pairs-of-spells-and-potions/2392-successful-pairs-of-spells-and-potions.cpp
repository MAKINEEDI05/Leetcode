#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> result(n, 0);

        sort(potions.begin(), potions.end());  

        for (int i = 0; i < n; i++) {
            long long minPotion = (success + spells[i] - 1) / spells[i]; 
            
            int index = lower_bound(potions.begin(), potions.end(), minPotion) - potions.begin();
            result[i] = m - index;
        }

        return result;
    }
};
