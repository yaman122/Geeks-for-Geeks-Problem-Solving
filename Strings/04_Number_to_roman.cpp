// string convertToRoman(int n) {
        
//         map<int, string> m1 = {
//             {1, "I"},
//             {4, "IV"},
//             {5, "V"},
//             {9, "IX"},
//             {10, "X"},
//             {40, "XL"},
//             {50, "L"},
//             {90, "XC"},
//             {100, "C"},
//             {400, "CD"},
//             {500, "D"},
//             {900, "CM"},
//             {1000, "M"}
//         };
        

//             string ans = "";
//         while (n > 0) {
//             auto it = m1.upper_bound(n);
//             if (it != m1.begin()) {
//                 --it;
//                 ans += it->second;
//                 n -= it->first;
//             }
//             else {
//                 ans += "M";
//                 n -= 1000;
//             }
//         }
//         return ans;
//     }