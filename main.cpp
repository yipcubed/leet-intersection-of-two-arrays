#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/intersection-of-two-arrays/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        set<int> s1, s2;
        for (auto val : nums1) s1.insert(val);
        for (auto val : nums2) s2.insert(val);
        vector<int> v(min(s1.size(), s2.size()));
        auto it = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin());
        v.resize(it - v.begin());
        return v;
    }
};

void test1() {
    vector<int> v1{1, 2, 2, 1}, v2{2, 2};

    cout << " ? " << Solution().intersection(v1, v2) << endl;
}

void test2() {

}

void test3() {

}