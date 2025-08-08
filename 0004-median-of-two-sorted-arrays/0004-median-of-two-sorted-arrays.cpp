class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>num3;
        int n=nums1.size();
        int m=nums2.size();
        int k=n+m;
        for(int i=0;i<n;i++){
            num3.push_back(nums1[i]);
        }
        for (int i=0;i<m;i++){
            num3.push_back(nums2[i]);
        }
        sort(num3.begin(),num3.end());
        if(k%2==0){
            return ((num3[k/2-1]+num3[k/2])/2.0);
        }
         else{
            return num3[k/2.0];
         }                
    }
};