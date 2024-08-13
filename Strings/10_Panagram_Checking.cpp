//  bool checkPangram (string s) {
//         if(s.length()<26)
//         {
//             return 0;
//         }
//         int arr[26]={0};
//         for(int i=0;i<s.length();i++)
//         {
//             if(islower(s[i]))
//             {
//             arr[s[i]-'a']=1;
//             }
//             else
//             {    
//                 arr[s[i]-'A']=1;
//                 }
//             }
        
//         for(int i=0;i<26;i++)
//         {
           
//            if(arr[i]==0)
//            {
//                return 0;
//            }
//         }
//         return 1;
//     }