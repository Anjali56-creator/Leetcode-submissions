🌟7
OOP	DSA Practice	Extensions
📊 My LeetCode Progress
<p align="center"> <img src="https://leetcard.jacoblin.cool/leetcode_break?theme=light&ext=heatmap" alt="LeetCode Stats" /> </p>
📈 Repo Stats
<p align="center"> <img src="https://img.shields.io/github/languages/top/Anjali56-creator/Leetcode-submissions?color=FF66C4&style=for-the-badge" /> <img src="https://img.shields.io/github/last-commit/Anjali56-creator/Leetcode-submissions?color=FF9CEE&style=for-the-badge" /> <img src="https://img.shields.io/github/repo-size/Anjali56-creator/Leetcode-submissions?color=F4A9C4&style=for-the-badge" /> </p>
🚀 Problem Categories (Growing…)
Category	Status
🔢 Arrays	✔ In Progress
🔤 Strings	✔ Started
📚 Hash Map	✔ Basic Level
🧮 Math	✔ Ongoing
🔄 Two Pointers	🚧 Learning
🌲 Trees	🔜 Coming Soon
🔗 Linked List	🔜 Coming Soon
🧠 DP	🔜 Later
🔥 Example Solutions
✔ Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(mp.count(diff)) return {mp[diff], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};

🎯 Goals

🚀 maximum LeetCode questions

🧠 Master patterns (sliding window, 2 pointers, DP)

🌱 Become interview-ready

📘 Build confidence in C++ & DSA

🤝 Connect With Me
<p align="center"> <a href="https://linkedin.com/in/anjali-kumari-379834339"> <img src="https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white" /> </a> <a href="https://leetcode.com/u/leetcode_break/"> <img src="https://img.shields.io/badge/LeetCode-FEAE35?style=for-the-badge&logo=leetcode&logoColor=white" /> </a> <a href="https://github.com/Anjali56-creator"> <img src="https://img.shields.io/badge/GitHub-171515?style=for-the-badge&logo=github&logoColor=white" /> </a> </p>
<p align="center"> ✨ Keep solving. Keep growing. Keep shining. ✨ </p>

✨ **Thanks for stopping by!**  
💡 Let’s build and grow together! 🚀  



