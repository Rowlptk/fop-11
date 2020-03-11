const numbers = [43,56,33,23,44,36,5];
const numbers2 = new Array(22,45,33,76,54);
const fruit = ['Apple', 'Banana', 'Orange', 'Pear'];
const mixed = [22,'Hello',true, undefined, null, {a:1, b: 2}, new Date()];

let val;
// Get Array length
val = numbers.length;

val = numbers[5];

numbers[6] = 100;

// Mutating arrays
// Adding one to end
numbers.push(999);
// Adding one to front
numbers.unshift(888);
// Remove one from end
numbers.pop();
// Remove one from front
numbers.shift();
// Splice
numbers.splice(3,0,150);

numbers.splice(5,1);



console.log(numbers);



console.log(val);