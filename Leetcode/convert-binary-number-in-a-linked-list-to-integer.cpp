/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<cmath>
// #include<cstdlib>
#include <cstdlib> 

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        // string str(v.begin(),v.end());
        // int num = atoi(str);
        // int res=0,i=0;
        // while(num!=0){
        //     int temp = n%10;
        //     res = res+temp*pow(2,i++);
        //     num = num/10;   
        // }
        // return res;
        int dec = 0, base = 1;
        for(int i=v.size()-1;i>=0;i--){
            dec = dec+v[i]*base;
            base = base * 2;
        }
        return dec;
        // for(int i=bin.size()-1;i>=0;i--)
        // {
        //     dec=dec+bin[i]*base;
        //     base=base*2;
        // }
        // return dec;
    }
};