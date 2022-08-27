// //Binary Search
// int binary(int arr[],int n,int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }        
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<binary(arr,n,key)<<endl;
// }

//Recursive Binary Search
// int binarySearch(vector<int> &arr,int start,int end,int element){
//     if(start>end){
//         return -1;
//     }
//     int mid=start+(end-start)/2;
//     if(arr[mid]==element){
//         return mid;
//     }
//     if(arr[mid]>element){
//         binarySearch(arr,start,mid-1,element);
//     }
//     else{
//         binarySearch(arr,mid+1,end,element);
//     }
// }
// int main(){
//     vector<int> arr={2,4,8,12,20};
//     cout<<binarySearch(arr,0,arr.size()-1,20)<<endl;
// }

//Lower Bound and Upper Bound using Binary Search
// int lower_Bound(vector<int> &v,int element){
//     int low=0,high=v.size()-1;
//     int mid;
//     while(high-low>1){
//         mid=low+(high-low)/2;
//         if(v[mid]<element){
//             low=mid+1;
//         }
//         else{
//             high=mid;
//         }
//     }
//     if(v[low]>=element){
//         return low;
//     }
//     if(v[high]>=element){
//         return high;
//     }
//     return -1;
// }

//Binary Search Questions

//Peak in mountain array(Concept of Monotonic Function in Binary Search)
// int peakIndex(vector<int> &arr){
//     int s=0;
//     int e=arr.size()-1;

//     int mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

// Sqaure root using Binary Search
// long long int BS(int n){
    // int s=0;
    // int e=n;
    // long long int mid=s+(e-s)/2;

    // long long int ans=-1;
    // while(s<=e){
    //     long long int square=mid*mid;

    //     if(square==n){
    //         return mid;
    //     }
    //     if(square<n){
    //         ans=mid;
    //         s=mid+1;
    //     }
    //     else{
    //         e=mid-1;
    //     }
    //     mid=s+(e-s)/2;
    // }
    // return ans;
// }

//Pivot in an array
// int getPivot(int arr[],int n){
    // int s=0;
    // int e=n-1;

    // int mid=s+(e-s)/2;
    // while (s<e)
    // {
    //     if(arr[mid]>=arr[0]){
    //         s=mid+1;
    //     }
    //     else{
    //         e=mid;
    //     }
    //     mid=s+(e-s)/2;
    // }
//     return s;
// }
// Search in rotated sorted array(Extension of Pivot Index in array) Important

//Time Based Key Value Store
// unordered_map<string,vector<pair<int,string>>> mp;

// void set(string key,string value,int timestamp){
//     mp[key].push_back({timestamp,value});
// }
// string get(string key,int timestamp){
//     auto itr=mp.find(key);
//     if(itr==mp.end()){
//         return "";
//     }

//     auto &vec=itr->second;

//     int l=0;
//     int r=vec.size()-1;
//     while(l<=r){
//         int mid=l+(r-l)/2;
//         if(vec[mid].first>timestamp){
//             r=mid-1;
//         }
//         else if(vec[mid].first<timestamp){
//             l=mid+1;
//         }
//         else{
//             r=mid;
//             break;
//         }
//     }
//     if(r<0){
//         return "";
//     }
//     return vec[r].second;
// }

//First and Last Position Of An Element
// int firstOcc(int arr[],int n,int key){
//     int s=0,e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
// }
// int lastOcc(int arr[],int n,int key){
//     int s=0,e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else if(key<arr[mid]){
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
// }

//Capacity to ship items within d Days
// bool isPossible(vector<int> &weights,int mid,int days){
//     int day=1;
//     int sumhere=0;
//     for(int i=0;i<weights.size();i++){
//         sumhere+=weights[i];
//         if(sumhere>mid){
//             day++;
//             sumhere=weights[i];
//         }
//     }
//     return (day<=days);
// }
// int shipWithinDays(vector<int> &weights,int days){
//     int maxval=0;
//     int sum=0;
//     for(auto i:weights){
//         sum+=i;
//         maxval=max(maxval,i);
//     }
//     if(weights.size()==days){
//         return maxval;
//     }
//     int low=maxval;
//     int high=sum;
//     int ans=0;

//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(isPossible(weights,mid,days)){
//             ans=mid;
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }

// //Aggresive Cows Problem
// bool isPoss(vector<int> &stalls,int k,int mid){
//     int cowCount=1;
//     int lastpos=stalls[0];

//     for(int i=0;i<stalls.size();i++){
//         if(stalls[i]-lastpos>=mid){
//             cowCount++;
//             if(cowCount==k){
//                 return true;
//             }
//             lastpos=stalls[i];
//         }
//     }
//     return false;
// }
// int aggresiveCows(vector<int> &stalls,int k){
//     sort(stalls.begin(),stalls.end());
//     int start=0;

//     int maxi=-1;

//     for(auto it:stalls){
//         maxi=max(maxi,it);
//     }

//     int end=maxi;

//     int ans=-1;

//     int mid=s+(e-s)/2;

//     while(s<=e){
//         if(isPoss)(stalls,k,mid){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

//Minimum Limit of Balls in Bag
// bool isPossible(vector<int> &nums,int mid,int maxOperations){
//     int count=0;
//     for(int i=0;i<nums.size();i++){
//         count+=(nums[i]-1)/mid;
//         if(count>maxOperations){
//             return false;
//         }
//     }
//     return true;
// }
// int minimumSize(vector<int> &nums,int maxOperations){
//     int low=1;
//     int high=*max_element(nums.begin(),nums.end());
//     int ans=0;
//     int mid;
//     while(low<=high){
//         mid=low+(high-low)/2;
//         if(isPossible(nums,mid,maxOperations)){
//             ans=mid;
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }
//EKO SPOJ Problem (Advanced Binary Search)
// int n;
// long long wood;
// bool isWoodSufficient(vector<long long> &trees,int h){
//     long long sumw=0;
//     for(int i=0;i<n;i++){
//         if(trees[i]>=h){
//             sumw+=(trees[i]-h);
//         }
//     }
//     return sumw>=wood;
// }
// int main(){
    
//     cin>>n>>wood;
//     vector<long long> trees(n);
    
//     for(int i=0;i<n;i++){
//         cin>>trees[i];
//     }
//     long long lo=0,hi=1e9,mid;

//     while(hi-lo>1){
//         mid=(hi+lo)/2;
//         if(isWoodSufficient(trees,mid)){
//             lo=mid;
//         }
//         else{
//             hi=mid-1;
//         }
//     }
//     if(isWoodSufficient(trees,hi)){
//         cout<<hi<<endl;
//     }
//     else{
//         cout<<lo<<endl;
//     }
// }

