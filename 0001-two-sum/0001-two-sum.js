/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    let mpp = new Map();
    // for(let num of nums){
    for (let i = 0; i < nums.length; i++) {
        let temp = target - nums[i]
        if (mpp.has(temp)) {
            console.log(mpp.get(temp), i)
            return [mpp.get(temp), i]
        }
        mpp.set(nums[i], i)
    }
};