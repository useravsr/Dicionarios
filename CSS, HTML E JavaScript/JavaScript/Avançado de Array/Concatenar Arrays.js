const nums1 = [1, 2, 3];
const nums2 = [4, 5, 6];


//Duas maneiras de concatenar um array

const nums3 = [...nums1, ...nums2, ...[7, 8, 9], 'Antonio'];
const nums4 = nums1.concat(nums2, [7, 8, 9], 'Antonio');

console.log(nums3);
console.log(nums4);