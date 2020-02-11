// #include <iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int t;
//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         vector<int> arr(n,0);
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         for(int i=0;i<q;i++)
//         {
//             int x;
//             cin>>x;
//             int count=0;
//             int itr=-1,Max=-1;
//             for(int i=0;i<n;i++)
//             {
//                 if(x>arr[i])
//                 {
//                     if(Max<2*(x-arr[i]))
//                     {
//                         itr=i;
//                     }
//                 }
//                 arr.erase(itr);
//             }

//         }
//     }
    
//     return 0;
// }
