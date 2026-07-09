/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    let mpp = new Map();
    let i = 0;
    for (num of nums) {
        let temp = target - num;
        if (mpp.has(temp)) { 
            return [mpp.get(temp), i];
        }
        else mpp.set(num, i);
        i++;
    }
    return [];
};