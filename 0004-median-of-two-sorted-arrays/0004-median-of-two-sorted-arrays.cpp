class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(); 
        int n = nums2.size(); 

        vector<int> merge(m + n, 0);
        int i = 0, j = 0, k = 0; 

        while (k < m + n) {
            if (i < m && (j >= n || nums1[i] < nums2[j])) { 
                merge[k] = nums1[i];
                i++;
            } else {
                merge[k] = nums2[j];
                j++;
            }
            k++;
        }

        double med = 0;

        if ((m + n) % 2 == 1) {
            int mid = (m + n + 1) / 2;
            med = merge[mid - 1];
        } else {
            int mid1 = (m + n) / 2;
            int mid2 = (m + n) / 2 - 1;
            med = (merge[mid1] + merge[mid2]) / 2.0; 
        }

        return med;
    }
};