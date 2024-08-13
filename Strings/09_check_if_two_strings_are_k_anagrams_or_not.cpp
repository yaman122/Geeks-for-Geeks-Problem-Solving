// bool areKAnagrams(string str1, string str2, int k) {
//         int arr[26]={0};
//      int count=0;
//      int one=str1.length();
//      int two=str2.length();
//      if(one!=two)
//      {
//          return false;
//      }
//      else{
//         for(int i=0;i<str1.length();i++)
//         {
//             arr[str1[i]-'a']=arr[str1[i]-'a']+1;
//         }
//         for(int i=0;i<str2.length();i++)
//         {
//             arr[str2[i]-'a']=arr[str2[i]-'a']-1;
//         }
//         int cnt=0;
//         for(int i=0;i<26;i++)
//         {
//             cnt=cnt+abs(arr[i]);
//             if(cnt/2>k)
//             {
//                 return false;
//             }
//         }
//         if(cnt/2>k)
//         {
//             return false;
//         }
//         return true;
//     }
//     }