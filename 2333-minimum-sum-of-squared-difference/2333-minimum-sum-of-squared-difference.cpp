class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long total_k = (long long)k1 + k2;
        
        unordered_map<int, long long> freq;
        int max_diff = 0;
        for (int i = 0; i < n; ++i) {
            int d = abs(nums1[i] - nums2[i]);
            freq[d]++;
            max_diff = max(max_diff, d);
        }
        
        priority_queue<int> pq;
        for (auto& [d, count] : freq) {
            pq.push(d);
        }
        
        while (total_k > 0 && !pq.empty()) {
            int curr = pq.top();
            pq.pop();
            
            if (curr == 0) break;
            
            long long count = freq[curr];
            long long next_val = pq.empty() ? 0 : pq.top();
            long long diff_steps = curr - next_val;
            
            // Maximum operations we can perform to bring all 'curr' down to 'next_val'
            long long ops_needed = count * diff_steps;
            
            if (total_k >= ops_needed) {
                total_k -= ops_needed;
                freq[curr] = 0;
                freq[next_val] += count;
            } else {
                long long decrease = total_k / count;
                long long remainder = total_k % count;
                
                freq[curr] -= count;
                freq[curr - decrease] += (count - remainder);
                freq[curr - decrease - 1] += remainder;
                
                if (freq[curr - decrease] > 0 && freq[curr - decrease] == (count - remainder)) {
                    pq.push(curr - decrease);
                }
                if (freq[curr - decrease - 1] > 0) {
                    pq.push(curr - decrease - 1);
                }
                total_k = 0;
            }
        }
        
        long long ans = 0;
        for (auto& [d, count] : freq) {
            if (d > 0 && count > 0) {
                ans += (long long)d * d * count;
            }
        }
        
        return ans;
    }
};