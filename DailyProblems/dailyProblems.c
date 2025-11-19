#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>



// // 1513

// int countSubstrings(char* s) {
//     int count = 0;  
//     int cons = 0;   

//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] == '1') {
//             cons++;
//         } else {
//             count += cons * (cons + 1) / 2; 
//             cons = 0;                     
//         }
//     }
//     count += cons * (cons + 1) / 2;

//     return count;
// }

// int main() {
//     char s[] = "0110111";
//     int result = countSubstrings(s);
//     printf("%d\n", result);  
//     return 0;
// }

// // 717

// bool isOneBitCharacter(int* bits, int bitsSize);
// int main() {
//     int bits[] = {1, 0, 0};
//     int size = sizeof(bits) / sizeof(bits[0]);

//     bool result = isOneBitCharacter(bits, size);
//     printf("%d", result);

//     return 0;
// }
// bool isOneBitCharacter(int* bits, int bitsSize) {
//     int i = 0;
//     while (i < bitsSize - 1) {   
//         if (bits[i] == 1) {
//             i += 2;         
//         } else {
//             i += 1;             
//         }s
//     }
//     return i == bitsSize - 1;   
// }


// // 2154

// int findFinalValue(int* nums, int numsSize, int original);

// int main(){
//     int result, nums[5] = {5, 3, 6, 1, 12};
//     int original = 3;
//     result = findFinalValue(nums, 5, original);
//     printf("%d", result);
//     return 0;
// }

// int findFinalValue(int* nums, int numsSize, int original){
//     int found, i;

//     while(1) {
//         found = 0; 
//         for(i = 0; i < numsSize; i++){
//             if(nums[i] == original){
//                 original *= 2;
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found) break; 
//     }

//     return original;
// }