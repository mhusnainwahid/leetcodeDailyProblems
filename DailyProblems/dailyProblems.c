#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdbool.h>



// 1513

int countSubstrings(char* s) {
    int count = 0;  
    int cons = 0;   

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') {
            cons++;
        } else {
            count += cons * (cons + 1) / 2; 
            cons = 0;                     
        }
    }
    count += cons * (cons + 1) / 2;

    return count;
}

int main() {
    char s[] = "0110111";
    int result = countSubstrings(s);
    printf("%d\n", result);  
    return 0;
}

// 717

bool isOneBitCharacter(int* bits, int bitsSize);
int main() {
    int bits[] = {1, 0, 0};
    int size = sizeof(bits) / sizeof(bits[0]);

    bool result = isOneBitCharacter(bits, size);
    printf("%d", result);

    return 0;
}
bool isOneBitCharacter(int* bits, int bitsSize) {
    int i = 0;
    while (i < bitsSize - 1) {   
        if (bits[i] == 1) {
            i += 2;         
        } else {
            i += 1;             
        }s
    }
    return i == bitsSize - 1;   
}


// 2154

int findFinalValue(int* nums, int numsSize, int original);

int main(){
    int result, nums[5] = {5, 3, 6, 1, 12};
    int original = 3;
    result = findFinalValue(nums, 5, original);
    printf("%d", result);
    return 0;
}

int findFinalValue(int* nums, int numsSize, int original){
    int found, i;

    while(1) {
        found = 0; 
        for(i = 0; i < numsSize; i++){
            if(nums[i] == original){
                original *= 2;
                found = 1;
                break;
            }
        }
        if(!found) break; 
    }

    return original;

}

// // 1930
int countPalindromicSubsequence(char* s);
int main(){
    char s[5] = "aabca";
    int result;
    result = countPalindromicSubsequence(s);
    return 0;
}
int countPalindromicSubsequence(char* s) {
    int count = 0;
    char ch;
    for(ch = 'a'; ch <= 'z'; ch++) {
        int left = -1, right = -1;
        int i;
        for(i = 0; s[i] != '\0'; i++) {
            if(s[i] == ch) {
                if(left == -1) left = i;
                right = i;
            }
        }
        if(left != -1 && right != -1 && left < right) {
            int freq[26] = {0};
            int i,k;
            for(i = left + 1; i < right; i++) {
                freq[s[i] - 'a'] = 1;
            }
            for(k = 0; k < 26; k++) {
                if(freq[k] == 1) count++;
            }
        }
    }

    return count;
}

// 3190
int minimumOperations(int* nums, int numsSize);
int main(){
    int nums[4] = {1,2,3,4};
    int result = minimumOperations(nums,4);
    printf("%d" , result);
    return 0;
}
int minimumOperations(int* nums, int numsSize) {
    int i, count = 0;
    for (i = 0; i < numsSize; i++) {
        int rem = nums[i] % 3;
        if (rem == 1 || rem == 2) {
            count += 1;
        }
    }
    return count;
}
