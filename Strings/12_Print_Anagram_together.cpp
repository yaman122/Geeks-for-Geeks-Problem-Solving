
// class Solution{
// public:
//     vector<vector<string>> Anagrams(vector<string>& string_list) {
//         unordered_map<string, vector<string>> mp;
//         for (int i = 0; i < string_list.size(); ++i) {
        
//         string temp = string_list[i];
        
//         sort(temp.begin(), temp.end());
        
//          mp[temp].push_back(string_list[i]);
//     }
//         vector<vector<string>>ans;
//             for(auto it:mp)
//             {
//                 vector<string>v1;
//                 for(auto itt:it.second)
//                 {
//                     v1.push_back(itt);
//                 }
//                 ans.push_back(v1);
//             }
//             return ans;
            
//         }
// };