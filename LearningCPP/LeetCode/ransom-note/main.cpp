//
// Created by Jasper Oh on 2024-11-05.
//

#include <iostream>
#include <string>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> map1, map2;

    // 1. For ransomNote Using hashmap to get the string's character and save in map { character : num }
    for(char it : ransomNote)
        map1[it]++;

    // 2. For magazine Using hashmap to get the string's character and save in map { character : num }
    for(char it: magazine)
        map2[it]++;

    // 3. Check if all of ransomNote's character number is matched with magazine's match number.
    for(auto ele: map1) {
        // 3-1. When iterating magazine's characters check every character is contained in magazine's map and the number is bigger than ransomNote's character.
        if(map2.contains(ele.first)) {
            if(ele.second > map2.at(ele.first)) {
                return false;
            }
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    // if true, return 1, else return 0.
    cout << canConstruct("aabbd", "aabbccdd") << endl;

}